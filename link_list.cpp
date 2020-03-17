#include<bits/stdc++.h>
using namespace std;
struct node{

int data;
node * next;

};
int main()
{

    long long int a,b,c,d,i,j,l;
    node * head;
    node *start;
    node *k;
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
while(start->next)
{
    cout<<start->data;
    start=start->next;
}

}
