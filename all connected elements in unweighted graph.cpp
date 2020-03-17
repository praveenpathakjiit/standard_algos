#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>v[],long long int c,long long int d)
{
    v[c].push_back(d);
    v[d].push_back(c);
}
void dfs(vector<int>v[],long long int a,bool visited[])
{
    visited[a]=true;
    cout<<a<<" ";
    for(auto i:v[a])
    {
        if(!visited[i])
            dfs(v,i,visited);
    }
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
               cout<<endl;

           dfs(v,i,visited);
           }
    }
}
