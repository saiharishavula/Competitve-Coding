#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void swap_nodes(Node** head,int x,int y)
{
    if(x==y)
        return;
    Node* currX;
    Node* currY;
    Node* prevX;
    Node* prevY;
    prevX = NULL;
    prevY = NULL;
    currX = (*head);
    currY = (*head);
    while(currX != NULL && currX->data != x || currY != NULL && currY->data != y)
    {
        if(currX != NULL && currX->data != x)
        {
            prevX = currX;
            currX = currX->next;
        }
        if(currY != NULL && currY->data != y)
        {
            prevY = currY;
            currY = currY->next;
        }
    }
    if(currX == NULL || currY == NULL)
    {
        cout<<"Not possible\n";
        return;
    }
    if(prevX == NULL)
    {
        (*head)=currY;
    }
    else
    {
        prevX->next=currY;
    }
    if(prevY == NULL)
    {
        (*head)=currX;
    }
    else
    {
        prevY->next=currX;
    }
    Node* temp = currX->next;
    currX->next = currY->next;
    currY->next = temp;
}
void push(Node** head,int value)
{
    Node* temp = new Node();
    (*temp).data = value;
    (*temp).next = (*head);
    (*head) = temp;

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
    swap_nodes(&head,9,9);
    print(head);

}
