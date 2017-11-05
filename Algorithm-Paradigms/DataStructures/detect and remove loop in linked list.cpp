#include<iostream>
#include<cstdio>
using namespace std;

struct Node
{
    int key;
    struct Node *next;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

void detectAndRemoveLoop(Node *head)
{
    Node* fast = head->next;
    Node* slow = head;
    while(fast!= NULL && fast->next!= NULL)
    {
        if(slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = head;
    while(slow!= fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}
int main()
{
    Node *head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

   // detectAndRemoveLoop(head);

    printf("Linked List after removing loop \n");
    printList(head);

    return 0;
}
