#include<iostream>
#include<cstdio>
#include<vector>
#define MARKER ')'
#define N 5
using namespace std;
vector<char> pre;
struct Node {
   char key;
   vector<Node*> child;  // An array of pointers for N children
};
// A utility function to create a new N-ary tree node
Node *newNode(char key)
{
    Node *temp = new Node;
    temp->key = key;
    for (int i = 0; i < N; i++)
        (temp->child).push_back(NULL);
    return temp;
}

// This function stores the given N-ary tree in a file pointed by fp
void serialize(Node *root)
{
    // Base case
    if (root == NULL) return;

    // Else, store current node and recur for its children
    pre.push_back(root->key);
    for (int i = 0; root->child[i]; i++)
         serialize(root->child[i]);

    // Store marker at the end of children
    pre.push_back(MARKER);
}

int deSerialize(Node *&root,int &i)
{
    // Read next item from file. If theere are no more items or next
    // item is marker, then return 1 to indicate same
    if ( i==pre.size() || pre[i] == MARKER )
       return 1;

    // Else create node with this item and recur for children
    root = newNode(pre[i]);
   // ++i;
    for (int k = 0; k < N; k++)
      if (deSerialize(root->child[k],++i))
         break;

    // Finally return 0 for successful finish
    return 0;
}

Node *createDummyTree()
{
    Node *root = newNode('A');
    root->child[0] = newNode('B');
    root->child[1] = newNode('C');
    root->child[2] = newNode('D');
    root->child[0]->child[0] = newNode('E');
    root->child[0]->child[1] = newNode('F');
    root->child[2]->child[0] = newNode('G');
    root->child[2]->child[1] = newNode('H');
    root->child[2]->child[2] = newNode('I');
    root->child[2]->child[3] = newNode('J');
    root->child[0]->child[1]->child[0] = newNode('K');
    return root;
}

// A utlity function to traverse the constructed N-ary tree
void traverse(Node *root)
{
    if (root)
    {
        printf("%c ", root->key);
        for (int i = 0; i < N; i++)
            traverse(root->child[i]);
    }
}

int main()
{
    Node *root = createDummyTree();

    serialize(root);
    for(int i=0;i<pre.size();i++)
    {
        cout<<pre[i];
    }
    Node *root1 = NULL;
    int i=0;
    deSerialize(root1,i);

    printf("\nConstructed N-Ary Tree from file is \n");
    traverse(root1);

    return 0;
}
