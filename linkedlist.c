#include <stdio.h>
#include <stdlib.h>
struct Node {int data; struct Node* next;}
;
void printList(struct Node* n){
    while (n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
    
};
// push a node into the first position of a list
void push(struct Node** head_ref, int new_data){
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=* head_ref;
    //give head_ref the value of new_node 
    * head_ref=new_node;
};
/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(struct Node* prev_node, int new_data){
    if (prev_node==NULL) {
        printf("The given node cannot be null \n");
    }else{
    struct Node* new_node=(struct Node* )malloc(sizeof(struct Node));
    new_node->data=new_data;
    /* 4. Make next of new node as next of prev_node */
    new_node->next=prev_node->next;
    /* 4. Make prev of new node the pre_node */
    prev_node->next=new_node;
}
}

void append(struct Node* tail,int new_data){
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data=new_data;
    tail->next=new_node;
}  

int main()
{
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    push(&head,4);
    //insertAfter(second,9);
    
    printList(head);
}
