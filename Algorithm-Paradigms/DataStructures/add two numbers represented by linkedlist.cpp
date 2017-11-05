#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* add(Node* head1,Node* head2)
{
    Node* temp,*temp1;
    int c1=0,c2=0;
    temp = head1;
    int carry = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        c1++;
    }
    temp = head2;
    while(temp!=NULL)
    {
        temp = temp->next;
        c2++;
    }

    temp = head1;
    temp1 = head2;
      // cout<<temp->data<<" "<<temp1->data<<endl;
    if(c1>c2)
    {

        while(temp1 != NULL)
        {
            int temp_value = (temp->data+temp1->data+carry);
            temp->data = temp_value%10;
            carry = temp_value/10;
            temp = temp->next;
            temp1 = temp1->next;
        }
        while(carry!=0)
        {
         int temp_value = (temp->data+carry);

         temp->data = temp_value%10;
         carry = temp_value/10;
         if(temp->next == NULL)
            break;
         temp = temp->next;

        }
        if(carry)
        {
            Node *temp2 = new Node();
            temp2->data = carry;
            temp2->next = NULL;
            temp->next = temp2;
        }
        return head1;

    }
    else
    {
         while(temp != NULL)
        {
            int temp_value = (temp->data+temp1->data+carry);
            temp1->data = temp_value%10;
            carry = temp_value/10;
            temp = temp->next;
            if(temp1->next==NULL)
                break;
            temp1 = temp1->next;
        }
        if(temp1->next==NULL)
        {
            if(carry)
            {
            Node *temp2 = new Node();
            temp2->data = carry;
            temp2->next = NULL;
            temp1->next = temp2;
            }

        }
        else
        {
        while(carry!=0)
        {
         int temp_value = (temp1->data+carry);

         temp1->data = temp_value%10;
         carry = temp_value/10;
         if(temp1->next == NULL)
            break;
         temp1 = temp1->next;

        }
        if(carry)
        {
            Node *temp2 = new Node();
            temp2->data = carry;
            temp2->next = NULL;
            temp1->next = temp2;
        }
        }
        return head2;
    }
}
void push(Node** head,int key)
{
    Node* temp = new Node();
    temp->data = key;
    temp->next = *head;
    *head = temp;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    push(&head1,6);
    push(&head1,4);
   // push(&head1,9);
    //push(&head1,5);
    //push(&head1,7);
    print(head1);
    push(&head2,4);
    push(&head2,8);
    //push(&head2,8);
    print(head2);
    head1 = add(head1,head2);
    print(head1);


}
