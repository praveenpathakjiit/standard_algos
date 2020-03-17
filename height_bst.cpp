#include<bits/stdc++.h>
using namespace std;
int mx=0,cur=1,ok=0;
class BST{

public:
    int data;
    BST *left,*right;
   BST();
    BST(int a);
    BST*insertion(BST*,int );
    int depth(BST*);
    void inorder(BST*);
    int dup(BST*);

  //  int depth(BST*);



};
BST :: BST() : data(0), left(NULL), right(NULL){}
BST::BST(int key)
{
    data=key;
    left=NULL;
    right=NULL;
}
BST *previous=NULL;
void BST::inorder(BST*root)
{
    if(!root)
        return;
    inorder(root->left);
    if(previous!=NULL && root->data==previous->data)
    {
        cur++;
       mx= max(mx,cur);
    }
    else
        cur=1;
        previous=root;

    inorder(root->right);
}

BST*BST::insertion(BST*root,int key)
{
    if(!root)
        return new BST(key);
    if(key<root->data)
    {
        root->left=insertion(root->left,key);
    }
    else
    {
        root->right=insertion(root->right,key);
    }
    return root;
}
int depth(BST*root)
{
    if(!root)
        return 0;
    int ld=depth(root->left);
    int rd=depth(root->right);
    return max(ld,rd)+1;
}
int main()
{

    long long int a,c,d,i,j,k,l;
     BST b,*root=NULL;
     root=b.insertion(root,50);
     root=b.insertion(root,200);
     root=b.insertion(root,50);
     root=b.insertion(root,50);
     root=b.insertion(root,60);
     //

    // cout<<root->data<<" "<<root->left->data;
     b.inorder(root);
 //    cout<<depth(root);
cout<<mx;



}
