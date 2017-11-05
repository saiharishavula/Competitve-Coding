#include<stdio.h>
#include<stdlib.h>
#include<cassert>
#include<iostream>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

Node* SortedMerge(Node* a,Node* b)
{
  if(a == NULL)
  {
      return b;
  }
  if(b == NULL)
  {
      return a;
  }
  if(a->data<=b->data)
  {
      a->next = SortedMerge(a->next,b);
      return a;
  }
  else
  {
      b->next = SortedMerge(a,b->next);
      return b;
  }
}
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct Node *node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
}
int main()
{
    /* Start with the empty list */
    struct Node* res = NULL;
    struct Node* a = NULL;
    struct Node* b = NULL;
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);
    printList(a);

    push(&b, 20);
    push(&b, 3);
    push(&b, 2);
    printList(b);
    res = SortedMerge(a, b);
    printList(res);

    return 0;
}
