#include<bits/stdc++.h>
using namespace std;
class q{

public:
    stack<int>s1;
    void enque(int key);
    int dequeue();



};
void q:: enque(int key)
{
    s1.push(key);
    return ;
}
int q::dequeue()
{
    if(s1.empty())
    {

     cout<<"NOTHING FOUND";
     return -1;
    }

    int k=s1.top();
    s1.pop();
    if(s1.empty())
    {
        return k;
    }

   int temp=dequeue();
   enque(k);
   return temp;
}
int main()
{

int a,b,c,d,i,j,k,l;
q q1;
q1.enque(10);
q1.enque(30);q1.enque(20);q1.enque(40);
cout<<q1.dequeue();


}
