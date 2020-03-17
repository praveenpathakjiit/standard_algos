#include<bits/stdc++.h>
using namespace std;
vector<int>graph[6];
void addedge(int a,int b)
{graph[a].push_back(b);
graph[b].push_back(a);

}
int main()
{

    long long int a,b,c,d,i,j,k,l;
    addedge(1,0);
      addedge(2,0);
        addedge(3,1);
          addedge(4,2);
            addedge(5,2);
        queue<int>q;
        int visited[6];
        memset(visited,0,sizeof(visited));
        int parent[6];

        q.push(0);
        visited[0]=1;
        parent[0]=-1;
      while(!q.empty())
      {
          k=q.front();
          q.pop();
          for(i=0;i<graph[k].size();i++)
          {
              if(!visited[graph[k][i]])
              {


              q.push(graph[k][i]);
              parent[graph[k][i]]=k;
              visited[k]=1;
              }

          }
      }
    for(i=0;i<6;i++)
        cout<<parent[i]<<" ";

}
