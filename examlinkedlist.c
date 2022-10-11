#include <stdio.h>
#include <stdlib.h>

struct LinkedNodeRec
{
  int data;
  struct LinkedNodeRec *next;
};
typedef struct LinkedNodeRec Node;

void
printList (Node * n)
{
  while (n != NULL)
    {
      printf ("%4d", n->data);
      n = n->next;
    }

}

Node *
locateNode (Node * h, int target)
{

  if (h == NULL)
    return NULL;
  else
    {
      Node *p = h;
      while (p != NULL)
	{
	  if (p->data == target)
	    return p;
	  else
	    {
	      p = p->next;
	    }
	}
      return NULL;

    }
}

Node *
makeNode (int new_data)
{
  Node *new_node = (Node *) malloc (sizeof (Node));
  new_node->data = new_data;
  new_node->next = NULL;
  return new_node;
}

//target is the data of the node after which we need to insert a new node
//new_data is the data of the new node 
Node *
insertNode (Node * h, int target,int new_data)
{
  Node* p;
     
  if (h == NULL)
    {
      p = makeNode (target);
      return p;
    }
  else
    {
      p = locateNode (h, target);
      if (p == NULL)
	return h;
      else
	{
	  Node *next_node = (Node *) malloc (sizeof (Node));
	  next_node->data = new_data;
	  next_node->next = p->next;
	  p->next = next_node;

	}
    }

}

Node* deleteAfter(Node* h, int target){
    Node* p;
    if (h==NULL){
        return h;
    }else{
        p=locateNode(h,target);
        if (p==NULL) return h;
        else if (p->next==NULL) return h;
        else {
            Node* delete_node;
            delete_node=p->next;
            p->next=delete_node->next;
            free(delete_node);
            return h;
        }
    }
    
}

int
main ()
{
  Node *a = NULL;
  Node *b = NULL;
  Node *c = NULL;

  a = (Node *) malloc (sizeof (Node));
  b = (Node *) malloc (sizeof (Node));
  c = (Node *) malloc (sizeof (Node));

  a->data = 1;
  a->next = b;

  b->data = 2;
  b->next = c;

  c->data = 3;
  c->next = NULL;



  insertNode (a, 3,4);
  insertNode (a,4,5);
  deleteAfter(a,3);
  // if (locateNode(a,2)==NULL) printf("\n Khong tim thay");
  // else {
  //     Node *p=locateNode(a,2);
  //     printf("\n%4d",p->data);
  // }
  printList (a);
  
}
