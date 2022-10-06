#include <stdio.h>
#include <stdlib.h>

struct TreeNodeRec {
    float key;
    struct TreeNodeRec* leftPtr;
    struct TreeNodeRec* rightPtr;
};
typedef struct TreeNodeRec TreeNode;
void makeTreeNode(float value,TreeNode* parent){
    TreeNode* new_node=(TreeNode*)malloc(sizeof(TreeNode));
    new_node->key=value;
    new_node->leftPtr=NULL;
    new_node->rightPtr=NULL;
    if (parent->leftPtr=NULL){
        parent->leftPtr=new_node;
        
    } else {
        parent->rightPtr=new_node;
    }
        
};

void inTranversal(TreeNode* root){
    TreeNode* left;
    TreeNode* right;
    if (root->leftPtr==NULL){
        printf("%f \n",root->key);
        if (root->rightPtr!=NULL){
            right=root->rightPtr;
            inTranversal(right);
        }
    } else {
        left=root->leftPtr;
        inTranversal(left);
        
    }
}
    

int main()
{
    TreeNode* a=NULL;
    TreeNode* b=NULL;
    TreeNode* c=NULL;
    
    a=(TreeNode*)malloc(sizeof(TreeNode));
    b=(TreeNode*)malloc(sizeof(TreeNode));
    c=(TreeNode*)malloc(sizeof(TreeNode));
    
    a->key=10;
    a->leftPtr=b;
    a->rightPtr=c;
    
    b->key=6;
    b->leftPtr=NULL;
    b->rightPtr=NULL;
    
    c->key=14;
    c->leftPtr=NULL;
    c->rightPtr=NULL;
    
    
}
