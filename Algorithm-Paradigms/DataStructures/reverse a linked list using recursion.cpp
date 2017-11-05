#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void push(Node** head,int value)
{
    Node* temp = new Node();
    (*temp).data = value;
    (*temp).next = (*head);
    (*head) = temp;

}
void reverse_linkedlist(Node** head)
{
    Node* curr, *next_node;
    /* if empty list */
    if(*head==NULL)
        return;
    curr = *head;
    next_node = (*head)->next;
    /* if list contains only one node */
    if(next_node == NULL)
        return;
    reverse_linkedlist(&next_node);

    curr->next->next = curr;
    curr->next = NULL;

    (*head) = next_node;

}
void print(Node* head)
{
    while(head!= NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
    print(head);
    reverse_linkedlist(&head);
    print(head);
    //cout<<c<<endl;

}
