#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
bool dfs(int G[][MAX], int V, int u, vector<int> &color, int clr)
{
    if(color[u]!=-1)
    {
        return (color[u]==clr);
    }
    color[u]=clr;
    for(int i=0;i<V;i++)
    {
        if(G[u][i] && !dfs(G,V,i,color,1-clr))
        {
            return false;
        }
    }
 return true;
}
bool isBipartite(int G[][MAX],int V)
{
     vector<int> color(V,-1);
     for(int i=0;i<V;i++)
     {
         if(color[i]==-1 && !dfs(G,V,i,color,1))
         {
             return false;
         }
     }
  return true;
}
int main()
{
    int t;
    cin>>t;
    int g[MAX][MAX];
    while(t--)
    {
        memset(g,0,sizeof(g));
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>g[i][j];
            }
        }
       cout<<isBipartite(g,n)<<endl;
    }
 return 0;
}
