#include<bits/stdc++.h>
using namespace std;
stack<int>s;
void sortedinsert(int temp)
{
    if(s.size()==0|| s.top()<=temp)
    {
        s.push(temp);
        cout<<temp<<endl;

    }
else{
     int temp2=s.top();
     s.pop();
     sortedinsert(temp);
     s.push(temp2);
}

}
void stacksort()
{
    if(s.size()!=0)
    {
        int temp=s.top();
        s.pop();
        stacksort();
        sortedinsert(temp);
    }
}
int main()
{

    long long int a,b,c,d,i,j,k,l;

    s.push(10);
    s.push(20);s.push(15);s.push(17);s.push(110);
  //  cout<<s.top();
    stacksort();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    s.pop();
    cout<<s.top();



}
