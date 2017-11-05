 #include<iostream>
 #include<cstdlib>
 using namespace std;
 struct node
 {
     int val;
     node *right,*left;
 };
 struct node* newnode(int val)
 {
     node* temp=(struct node*)malloc(sizeof(struct node));
     temp->val=val;
     temp->left=NULL;
     temp->right=NULL;
    return temp;
     }
     struct node* insert(struct node* node,int v)
     {
         if(node==NULL)
            return (newnode(v));
         else{
            if(node->val>v)
                node->left=insert(node->left,v);
            else
                node->right=insert(node->right,v);
         }
         return node;
     }
     int minval(struct node* node)
     {
         while(node->left!=NULL)
         {node=node->left;
         }
         return node->val;
     }
 int main()
 { struct node* root=NULL;
  root=insert(root,4);
     insert(root,2);
     insert(root,8);
     insert(root,3);
     cout<<minval(root);
     return 0;
 }
