#include<bits/stdc++.h>
using namespace std;

bool valid(bool vis[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
         return false;
    }
    return true;
}
bool solution(vector<int> adj[], int src, bool vis[],int n)
{
    if(valid(vis,n))
       return true;

    for(int i=0;i<adj[src].size();i++)
    {
        if(!vis[adj[src][i]])
        {    vis[adj[src][i]]=true;
            if(solution(adj,adj[src][i],vis,n))
               return true;
            vis[adj[src][i]]=false;
        }
    }
    return false;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,e;
	    cin>>n>>e;
	    vector<int> adj[n];
	    for(int i=0;i<e;i++)
	    {
	        int u,v;
	        cin>>u>>v;
	        u--,v--;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }

	    bool vis[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        memset(vis,false,sizeof(vis));
	        vis[i]=true;
	        if(solution(adj,i,vis,n))
	          {
	              cout<<"1"<<endl;
	              break;
	          }
	    }
	    if(i==n)
	     cout<<"0"<<endl;
	}
	return 0;
}
