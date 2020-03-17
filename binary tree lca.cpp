#include<bits/stdc++.h>
using namespace std;
struct node{
int val;
struct node * left,*right;

};
struct node* newnode(int key)
{

 struct node * temp=new node;
 temp->val=key;
 temp->left=temp->right=NULL;

}
struct node *findlca(struct node *root,int a,int b)
{

    if(!root)
        return NULL;
    if(root->val==a || root->val==b)
        return root;
    struct node *left=findlca(root->left,a,b);
    struct node *right=findlca(root->right,a,b);

    if(left!=NULL && right!=NULL)
        return root;
    else if(left==NULL && right==NULL)
        return NULL;
         else if(left!=NULL && right==NULL)
        return left;
         else if(left==NULL && right!=NULL)
        return right;

};
int main()
{

long long int a,b,c,d,i,j,k,l;

struct node * root;
root =newnode(5);
root->left=newnode(10);
root->right=newnode(12);
root->left->left=newnode(14);
root->left->right=newnode(17);
root->right->left=newnode(21);
root->right->right=newnode(24);

cout<<findlca(root,24,17)->val;
}
