#include<bits/stdc++.h>
using namespace std;
int pre[100],post[100];
int t=0;
void addedge(vector<int>v[],long long int c,long long int d)
{
    v[c].push_back(d);
    v[d].push_back(c);
}
void dfs(vector<int>v[],long long int a,bool visited[])
{
    visited[a]=true;
    pre[a]=t;
    t++;
    //cout<<a<<" ";
    for(auto i:v[a])
    {
        if(!visited[i])
          {

            dfs(v,i,visited);
          }

    }
    post[a]=t;
    t++;
}
int main()
{

    long long int a,b,c,d,i,j,k,l;
    cout<<"input the total no of nodes in the graph"<<endl;
    cin>>a;
    vector<int>v[a];
    bool visited[a];
    memset(visited,0,sizeof(visited));
    cout<<"input total no of edges in graph"<<endl;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>c>>d;
        addedge(v,c,d);
    }

    for(i=0;i<a;i++)
    {
        if(!visited[i])
           {

           dfs(v,i,visited);


           }
    }
    for(i=0;i<a;i++)
        cout<<pre[i]<<" ";
    cout<<endl;
    for(i=0;i<a;i++)
        cout<<post[i]<<" ";
}
