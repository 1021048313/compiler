#include "AstNode.h"
#include <stack>

AbstractAstNode:: AbstractAstNode(){
    this->parent = NULL;
    this->firstChild = NULL;
    this->nextSibling = NULL;
    this->content = "Null Node";
    this->depth = 0;
}

AbstractAstNode:: AbstractAstNode(AstNodeType nodeType, char* content){
    this->parent = NULL;
    this->firstChild = NULL;
    this->nextSibling = NULL;
    this->content = content;
    this->nodeType = nodeType;
    this->depth = 0;
}

AbstractAstNode* AbstractAstNode:: getParent(){
    return this->parent;
}

AbstractAstNode* AbstractAstNode:: getFirstChild(){
    return this->firstChild;
}

AbstractAstNode* AbstractAstNode:: getNextSibling(){
    return this->nextSibling;
}
// AbstractAstNode* AbstractAstNode:: getLastSiblingNode(){
//     AbstractAstNode* t = this;
//     while (t->nextSibling != NULL)
//     {
//         t = t->nextSibling;
//     }
//     return t;
// }

std::string AbstractAstNode:: getContent(){
    return this->content;
}

int AbstractAstNode:: getDepth(){
    return this->depth;
}

void AbstractAstNode:: setDepth(int newDepth){
    this->depth = newDepth;
}

// addFirstChild 和 addNextSibling 负责调好指针关系；depth的更新全部交给updateSubAstDepth
void AbstractAstNode:: addFirstChild(AbstractAstNode* node){ 
    if(node != NULL) {
        this->firstChild = node;
        node->parent = this;
        AbstractAstNode* sibling = node->nextSibling;
        while(sibling != NULL){
            sibling->parent = this;
            sibling = sibling->nextSibling;
        }
        updateSubAstDepth(node);
    }
    else printf("Param is NULL!\n");
}

void AbstractAstNode:: addNextSibling(AbstractAstNode* node) {
    if(node != NULL){
        this->nextSibling = node;
        node->parent = this->parent;
        updateSubAstDepth(node);
    }
    else printf("Param is NULL!\n");
}

void AbstractAstNode:: printNodeInfo() {
    int depth = this->depth;
    char* prefix = new char[depth*4];
    for(int i=0; i<depth*4; i++){
        prefix[i] = ' ';
    }
    int i = 0;
    AbstractAstNode* father = this->parent;
    while(i < depth){
        if (father->nextSibling == NULL){
            father = father->parent;
            i++;
        }
        else{
            i++;
            prefix[(depth-i)*4] = '|';
            father = father->parent;
        }
    }
    std::cout<<prefix<<"|____"
            <<"Content: "<<this->content
            <<" Depth: "<<this->depth
            <<std::endl;
}

void updateSubAstDepth(AbstractAstNode* subRoot){
    if (subRoot == NULL) return;
    subRoot->setDepth(subRoot->getParent()->getDepth()+1);
    AbstractAstNode* sibling = subRoot->getNextSibling();
    updateSubAstDepth(sibling);
    AbstractAstNode* child = subRoot->getFirstChild();
    updateSubAstDepth(subRoot->getFirstChild());
}

void printAst(AbstractAstNode* Root){
    std::stack<AbstractAstNode* > nodeStack;
    nodeStack.push(Root);
    Root->isVisited = true;
    Root->printNodeInfo();
    while(!nodeStack.empty()){
        AbstractAstNode* node = nodeStack.top();
        AbstractAstNode* child = node->getFirstChild();
        if(child != NULL && !child->isVisited){
            nodeStack.push(child);
            child->isVisited = true;
            child->printNodeInfo();
        }
        else if (child == NULL || child->isVisited){
            nodeStack.pop();
            AbstractAstNode* sibling = node->getNextSibling();
            if (sibling != NULL) {
                nodeStack.push(sibling);
                sibling->isVisited = true;
                sibling->printNodeInfo();
            }
        }
    }

}