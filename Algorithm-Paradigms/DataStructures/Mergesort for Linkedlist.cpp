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
void merge_two_lists(Node** des,Node** source)
{
    Node* temp = (*source); // store it
    (*source) = (*source)->next;
    temp->next = (*des);
    (*des) = temp;

}
Node* SortedMerge(Node* a,Node* b)
{
    Node dummy;
    dummy.next = NULL;
    Node* temp = &dummy;
    while(1)
    {
    if(a == NULL)
    {
        temp->next = b;
        break;
    }
    if(b == NULL)
    {
        temp->next = a;
        break;
    }
    if(a->data<=b->data)
    {
        merge_two_lists(&temp->next,&a);
    }
    else
    {
        merge_two_lists(&temp->next,&b);
    }
    temp = temp->next;
    }
    return dummy.next;
}
void split(Node* head, Node** first_half,Node** sec_half)
{
    Node* fast,*slow;
    slow = head;
    fast = head->next;
    if(head == NULL || head->next == NULL)
        return;
    while(fast!= NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    (*sec_half)=slow->next;
    (*first_half) = head;
    slow->next = NULL;

}
void Merge_sort(Node** head)
{
    Node* temp = (*head);
    Node *a,*b;
    if(temp == NULL || temp->next == NULL)
        return;
    split(temp,&a,&b);

    Merge_sort(&a);
    Merge_sort(&b);

    (*head)=SortedMerge(a,b);
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
    struct Node* a = NULL;
    push(&a, 15);
   // push(&a, 32);
   // push(&a, 51);
    //push(&a, 2);
    //push(&a, 3);
    //push(&a, 2);
    printList(a);
    Merge_sort(&a);
    printList(a);

    return 0;
}
