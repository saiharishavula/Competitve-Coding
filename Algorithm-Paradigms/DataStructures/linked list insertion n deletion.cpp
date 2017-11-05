#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* create_new_node(int value)
{
    struct Node* new_node = new Node();
    new_node->data=value;
    new_node->next=NULL;
    return new_node;
}
void insert_at_beginning(Node** head,int value)
{
    Node* temp = create_new_node(value);
    temp->next=(*head);
    (*head)=temp;
}
void insert_at_end(Node** head,int value)
{
    Node* temp = create_new_node(value);
    Node* temp1 = *head;
    if(temp1==NULL)
    {
        *head=temp;
    }
    else{
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void insert_at_middle(Node** head,int prev_value,int value)
{
    Node* temp = create_new_node(value);
    Node* temp1 = (*head);
    while(temp1->data!=prev_value)
        temp1=temp1->next;
    temp->next=temp1->next;
    temp1->next=temp;
}
void delete_node(Node** head,int value)
{
    Node* temp = (*head);
    Node* prev;
    if(temp->data == value)
    {
        (*head)=temp->next;
        delete(temp);
        return;
    }
    while(temp!=NULL && temp->data!= value )
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp == NULL)
    {
        cout<<"Not Found\n";
        return;
    }
    prev->next=temp->next;
    delete(prev);
}
void delete_node_at_position(Node* &head, int position)
{
    // position 0 means head (first node)
    // position 1 means 2nd second node and so on...,
    Node* temp = (head);
    if(position==0)
    {
        head = temp->next;
        delete(temp);
        return;
    }
    for(int i=0;i<position-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp == NULL || temp->next == NULL)
    {
        cout<<" NOT FOUND\n";
        return;
    }
    Node* temp1;
    temp1 = temp->next->next;
    delete(temp->next);
    temp->next = temp1;

}
void print_linkedlist(Node* &head)
{
    Node* temp = (head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int get_count(Node* temp)
{
    /*Both the iterative and recursive have same time complexity of O(n).
    But there is a slight delay in the recursive method
    as each function call requires time.*/

    if(temp==NULL)
        return 0;
    return 1+get_count(temp->next);
}
int main()
{
    struct Node* head = NULL;
    insert_at_beginning(&head,1);
    insert_at_end(&head,2);
    insert_at_end(&head,5);
    insert_at_end(&head,4);
    insert_at_middle(&head,5,3);
    insert_at_beginning(&head,7);
    insert_at_middle(&head,7,9);
    print_linkedlist(head);
    delete_node(&head,7);
    delete_node(&head,11);
    print_linkedlist(head);
    delete_node_at_position(head,5);
    print_linkedlist(head);
    cout<<get_count(head);

}
