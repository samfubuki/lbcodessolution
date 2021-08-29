#include <bits/stdc++.h>
using namespace std;

bool adjcolor(vector<int> V[],int s,int colors[],int color)
{
    for(int i=0;i<V[s].size();i++)
    {
        int f=V[s][i];

        if(colors[f]==color)
        {
            return false;
        }
    }

    return true;
}

bool recursive(vector<int> V[],int colors[],int s,int m)
{
    for(int i=0;i<V[s].size();i++)
    {
        int flag=0;
        int f=V[s][i];
        //cout<<f<<endl;
        if(colors[f]!=-1)
        {
            if(adjcolor(V,f,colors,colors[f])==false)
            {
                return false;
            }

            continue;
        }

        for(int j=1;j<=m;j++)
        {

            if(adjcolor(V,f,colors,j))
            {
                //cout<<f<<endl;
                colors[f]=j;

                bool ans = recursive(V,colors,f,m);

                if(ans)
                {
                    flag=1;
                    break;
                }

                if(ans==false)
                {
                    colors[f]=-1;
                }

            }
        }

        if(flag)
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;

	    vector<int> graph[n+5];

	    int m;cin>>m;

	    int colors[n+5];

	    for(int i=1;i<=n;i++)
	    {
	        colors[i]=-1;
	    }
	    int e;cin>>e;

	    int start=1;
	    while(e--)
	    {
	        int u,v;cin>>u>>v;

	        graph[u].push_back(v);
	        graph[v].push_back(u);
	        start=u;
	    }
	    colors[start]=1;

	    bool ans=recursive(graph,colors,start,m);

	    cout<<ans<<endl;
	}
	return 0;
}
