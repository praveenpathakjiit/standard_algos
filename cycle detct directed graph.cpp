
#include<bits/stdc++.h>
using namespace std;
int N=5;
vector<int> graph[5];
set<int>white,grey,black;

void addedge(int a,int b)
{
    graph[a].push_back(b);
   // graph[b].push_back(a);
}
bool ok=false;
void dfs(int a)
{

    white.erase(a);
    grey.insert(a);


       for(int i=0;i<graph[a].size();i++)
       {
            if(grey.find(graph[a][i])!=grey.end())
            {
               ok=1;
                return;
            }
            else if(white.find(graph[a][i])!=white.end())
            {
                dfs(graph[a][i]);
            }
       }


       grey.erase(a);
       black.insert(a);
       return;

}
int main()
{

    long long int a,b,c,d,i,j,k,l;
    //memset(visited,false,sizeof(visited));
    addedge(0,1);
    addedge(1,2);
    addedge(2,3);
    addedge(3,4);
    addedge(3,4);
    for(i=0;i<5;i++)
    {
        white.insert(i);
    }
    for(i=0;i<5;i++)
    {
        if(white.find(i)!=white.end())
        {
            dfs(i);
        }
    }
    if(ok)
        cout<<"Cycle Found";
    else
        cout<<"NO cycle found";



}
