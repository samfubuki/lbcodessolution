#include<bits/stdc++.h>
using namespace std;
#define MAX 5
bool visited[MAX][MAX];
void dfs(int i, int j, string s, vector<string>&result, int n, int m[MAX][MAX]){
    visited[i][j] = true;

    if(i == n-1 && j == n-1){
        result.push_back(s);
    }
    else{
        if(i+1<n && m[i+1][j] == 1 && !visited[i+1][j]){
            dfs(i+1, j, s+'D', result, n, m);
        }
        if(i-1>=0 && m[i-1][j] == 1 && !visited[i-1][j]){
            dfs(i-1, j, s+'U', result, n, m);
        }
        if(j+1<n && m[i][j+1] == 1 && !visited[i][j+1]){
            dfs(i, j+1, s+'R', result, n, m);
        }
        if(j-1>=0 && m[i][j-1] == 1 && !visited[i][j-1]){
            dfs(i, j-1, s+'L', result, n, m);
        }
    }
    visited[i][j] = false;
}
vector<string> printPath(int m[MAX][MAX], int n) {
    memset(visited, false, sizeof(visited));
    vector<string> result;
    dfs(0, 0, "", result, n, m);
    sort(result.begin(), result.end());

    if(result.empty() || m[0][0] == 0){
        return {};
    }
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m[MAX][MAX];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>m[i][j];
            }
        }
        vector<string> ans = printPath(m,n);
        if(ans.size()==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
           cout<<endl;
        }
    }
  return 0;
}
