#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int k=8;
void push_below(int t)
{
    if(s.size()==0)
        s.push(t);
    else
    {
        int x=s.top();
        s.pop();
        push_below(t);
        s.push(x);
    }
}
void reverse_stack()
{

    //cout<<s.top()<<endl;
    if(s.size()>0)
       {
           int temp=s.top();
            s.pop();
            reverse_stack();
            cout<<temp<<endl;
        push_below(temp);

       }


}


int main()
{

    long long int a,b,c,d,i,j,k,l;
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(40);
    //cout<<s.top()<<endl;
    reverse_stack();
   // cout<<s.top();

}
