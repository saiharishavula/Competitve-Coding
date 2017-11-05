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
    // using two pointers !!!
    Node* prev = NULL;
   // Node* temp_copy;
    Node* curr = (*head);
    while(curr != NULL)
    {
        *head = (*head)->next;
        curr->next = prev;
        prev = curr;
        curr = *head;
    }
    (*head) = prev;
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

}
