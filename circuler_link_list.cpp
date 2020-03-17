
#include<bits/stdc++.h>
using namespace std;
struct node{

int data;
node * next;

};
void del(node * start)
{

    node * itr;
    itr=start;
    while(itr->next->data!=5)
    {
        itr=itr->next;
    }
    itr->next=itr->next->next;
    return;

}
int main()
{

    long long int a,b,c,d,i,j,l;
    node * head;
    node *start;
    node *k;
    node *itr;
    head=new node();
    head->data=1;
    head->next=NULL;
    start=head;
 // cout<<start->data;
    for(i=0;i<10;i++)
    {
        k=new node();
        k->data=i+2;
        head->next=k;
        head=k;
}

itr=start;
while(itr->next!=NULL)
{
    //cout<<itr->data;
    itr=itr->next;
}
itr->next=start;
j=20;
itr=start;
while(j--)
{
    cout<<itr->data<<" ";
 itr=itr->next;

}
cout<<endl;
del(start);

j=20;
itr=start;
while(j--)
{
    cout<<itr->data<<" ";
 itr=itr->next;

}
}
