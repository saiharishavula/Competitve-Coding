#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
node* find_end(node* curr,int k)
{
    int c=1;
    while(curr->next!= NULL && c<k)
    {
        curr = curr->next;
        c++;
    }
    return curr;
}
void reverse_K_nodes(node* curr, node* prev, node* end)
{
    node* next;
    while(curr != end)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
}
node* reverse(node* head,int k)
{
    node* end;
    node *temp,*curr,*prev;
    curr = head;
    prev = NULL;
    while(curr != NULL)
    {
         end = find_end(curr,k);
         temp = end->next;

         reverse_K_nodes(curr,prev,temp);

         if(curr == head)
            head = end;
         else
            prev->next = end;

        prev = curr;

        prev->next = temp;

        curr = temp;
    }

    return head;

}
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}
int main(void)
{
    /* Start with the empty list */
    struct node* head = NULL;
    // push(&head, 9);
     push(&head, 8);
     push(&head, 7);
     push(&head, 6);
     push(&head, 5);
     push(&head, 4);
     push(&head, 3);
     push(&head, 2);
     push(&head, 1);

     printf("\nGiven linked list \n");
     printList(head);
     head = reverse(head, 3);

     printf("\nReversed Linked list \n");
     printList(head);

     return(0);
}
