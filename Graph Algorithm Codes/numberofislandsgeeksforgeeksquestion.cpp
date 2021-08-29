#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> A[], int n, int m, vector<vector<bool> > &vis, int i, int j)
{
    vis[i][j]=true;
    for(int x=i-1;x<=i+1;x++)
    {
        for(int y=j-1;y<=j+1;y++)
        {
            if(x>=0 && y>=0 && x<n && y<m)
            {
                if(!(x==i && y==j) && A[x][y]==1 && !vis[x][y])
                {
                    dfs(A,n,m,vis,x,y);
                }
            }
        }
    }
}
int findIslands(vector<int> A[], int N, int M) {

    vector<vector<bool> > vis(N,vector<bool>(M,false));
    int count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(A[i][j]==1 && !vis[i][j])
            {
                count++;
                dfs(A,N,M,vis,i,j);
            }
        }
    }
 return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> A[n];
        for(int i=0;i<n;i++)
        {
            vector<int> temp(m);
            A[i]=temp;
            for(int j=0;j<m;j++)
            {
                cin>>A[i][j];
            }
        }
      cout<<findIslands(A,n,m)<<endl;
    }
}
