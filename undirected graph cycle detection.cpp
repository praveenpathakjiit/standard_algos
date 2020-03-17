#include<bits/stdc++.h>
using namespace std;
int N=5;
vector<int> graph[5];
bool visited[5];

void addedge(int a,int b)
{
    graph[a].push_back(b);
    graph[b].push_back(a);
}
bool ok=false;
void iscycle(int a,int parent)
{
    visited[a]=true;
    for(int i=0;i<graph[a].size();i++)
    {
        if(!visited[graph[a][i]])
            iscycle(graph[a][i],a);
        else if(visited[graph[a][i]]==true && graph[a][i]!=parent)
        {
            ok=1;
            return;
        }

    }
    return;
}
int main()
{

    long long int a,b,c,d,i,j,k,l;
    memset(visited,false,sizeof(visited));
    addedge(0,1);
    addedge(1,2);
    addedge(2,3);
    addedge(3,0);
    for(i=0;i<N;i++)
    {
        if(!visited[i])
        {
            iscycle(i,-1);
        }
    }
    if(ok)
        cout<<"cycle present";
    else
        cout<<"cycle NOT Present";

}
