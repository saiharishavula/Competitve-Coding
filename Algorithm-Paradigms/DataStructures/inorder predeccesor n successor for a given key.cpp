#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int key;
    node *right,*left;
};
node* newnode(int key)
{
    node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=key;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
node* nodeinsert(node* node,int key)
{
    if(node==NULL)
        return (newnode(key));
    if(key>node->key)
    node->right=nodeinsert(node->right,key);
    else
    node->left=nodeinsert(node->left,key);
    return node;
}
void preNsuc(node* root,node*& pre,node*& suc,int key)
{
    if(root==NULL)
        return;
    if(root->key==key)
    {
        if(root->left!=NULL)
        {
        struct node* temp=root;
        while(temp->left!=NULL)
        temp=temp->right;
        pre=temp;
        }
        if(root->right!=NULL)
        {
        node* temp=root;
        while(temp->right!=NULL)
        temp=temp->left;
        suc=temp;
        }
        return;
    }
    if(key>root->key)
    {   pre=root;
        preNsuc(root->right,pre,suc,key);
    }
    else
    {
        suc=root;
        preNsuc(root->left,pre,suc,key);
    }

}
int main()
{
    struct node* root=NULL;
    root=nodeinsert(root,3);
    nodeinsert(root,2);
    nodeinsert(root,5);
    nodeinsert(root,1);
    node* pre;
    node* suc;
    cout<<"the pre n succ of given key are ";
    preNsuc(root,pre,suc,4);
    cout<<pre->key<<" and "<<suc->key<<endl;
    return 0;
}
