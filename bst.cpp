#include<bits/stdc++.h>
using namespace std;
class Bst{

public:
int data;
Bst * left,*right;
    Bst();
    Bst(int key);
    Bst*Insert(Bst*,int);
    void inorder(Bst*);
    Bst*del(Bst*,int);
    Bst*minval(Bst*);


};
Bst :: Bst() : data(0), left(NULL), right(NULL){}
Bst::Bst(int value)
{
    data=value;
    left=NULL;
    right=NULL;
}
Bst*Bst::minval(Bst*root)
{
    Bst* cur=root;
    while(cur&&cur->left!=NULL)
        cur=cur->left;
    return cur;
}
Bst*Bst::del(Bst*root,int key)
{
    if(root==NULL)
        return root;
        if(root->data>key)
        {
            root->left=del(root->left,key);

        }
        else if(root->data<key)
        {
            root->right=del(root->right,key);

        }
        else{
    if(root->left==NULL)
    {
        Bst*temp=root->right;
        free(root);
        return temp;
    }
    else if(root->right==NULL)
    {
        Bst*temp=root->left;
        free(root);
        return temp;

    }
    else{
        Bst*temp=minval(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
    }
    return root;
        }

}
Bst*Bst::Insert(Bst*root,int value)
{
    if(root==NULL)
    {
        return new Bst(value);
    }
    else if(root->data>value)
       root->left= Insert(root->left,value);
    else
    {
       root->right= Insert(root->right,value);
    }
    return root;
}
void Bst::inorder(Bst*root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
      Bst b, *root = NULL,*root1=NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
    b.inorder(root);
   //root1= b.minval(root->right);
  // cout<<endl<<root1->data;
  root1=b.del(root,30);
 b.inorder(root1);

}
