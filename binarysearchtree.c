#include <stdio.h>
#include <stdlib.h>
struct TreeNodeRec{
	float key;
	struct TreeNodeRec* leftPtr;
	struct TreeNodeRec* rightPtr;
};
typedef struct TreeNodeRec TreeNode;

void printInorder(TreeNode* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->leftPtr);
 
    /* then print the data of node */
    printf("%0.2f ", node->key);
 
    /* now recur on right child */
    printInorder(node->rightPtr);
}


void makeNodeLeft(TreeNode* parent,float value){
	TreeNode* new_node=NULL;
	new_node=(TreeNode*)malloc(sizeof(TreeNode));
	if (new_node==NULL){
		printf("\n Out of memory\n");
		exit(1);
	if (parent->leftPtr!=NULL){
		printf("\n Left child of this node has already existed! \n");
		exit(1);
	}	
	}else{
		new_node->key=value;
		parent->leftPtr=new_node;
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
	}
}

void makeNodeRight(TreeNode* parent,float value){
	TreeNode* new_node=NULL;
	new_node=(TreeNode*)malloc(sizeof(TreeNode));
	if (new_node==NULL){
		printf("\n Out of memory\n");
		exit(1);
	if (parent->rightPtr!=NULL){
		printf("\n Right child of this node has already existed! \n");
		exit(1);
	}	
	}else{
		new_node->key=value;
		parent->rightPtr=new_node;
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
	}
}
float findMin(TreeNode* node){
	if (node->leftPtr==NULL){
		return node->key;
	}
	findMin(node->leftPtr);
	
}

TreeNode* binaryST(TreeNode* node,float value){
	if (node!=NULL){
		
		if (node->key==value) {
			printf("already found!\n");
			printf("%0.2f\n", node->key);
			printf("%p\n ", node);
			
			return node;
		}
		else if (node->key>value){
		node=binaryST(node->leftPtr,value);} 
		else {
			node=binaryST(node->rightPtr,value);
		}
	}
	
	return NULL;
}



int main(int argc, char *argv[]) {
	TreeNode* a=NULL;
	TreeNode* b=NULL;
	TreeNode* c=NULL;
	
	a=(TreeNode*)malloc(sizeof(TreeNode));
	b=(TreeNode*)malloc(sizeof(TreeNode));
	c=(TreeNode*)malloc(sizeof(TreeNode));
	
	
	a->key=10;
	a->leftPtr=b;
	a->rightPtr=c;
	
	TreeNode* d=(TreeNode*)malloc(sizeof(TreeNode));
	d->key=4;
	d->leftPtr=NULL;
	d->rightPtr=NULL;
	
	
	b->key=6;
	b->leftPtr=d;
	b->rightPtr=NULL;
	
	c->key=14;
	c->leftPtr=NULL;
	c->rightPtr=NULL;
	
	makeNodeLeft(c,12);
	makeNodeRight(c,15);

	
	//inTranversal(a);
//	printf("%p\n",b->leftPtr);
//	printf("%p\n",d);
	printInorder(a);
	
	float min_tree;
	min_tree=findMin(a);
	//printf("\n%0.2f ",min_tree);
	
	float temp;
	temp=binaryST(a,12)->key;
	printf("Hey!");
	printf("\n%0.2f",temp);
	
	
	
}
