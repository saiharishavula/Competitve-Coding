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
void reverse_easy(Node* curr, Node* prev, Node** head)
{
    if(curr->next == NULL)
    {
        (*head)=curr;
        curr->next = prev;
        return;
    }
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    reverse_easy(temp,prev,head);

}
void reverse_linkedlist(Node** head)
{
    /* bit easy than previous method */
   if(*head==NULL || (*head)->next == NULL)
   return;
   reverse_easy(*head, NULL ,head);
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
