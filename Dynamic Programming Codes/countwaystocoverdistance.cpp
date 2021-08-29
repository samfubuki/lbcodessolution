#include<bits/stdc++.h>
using namespace std;
long long countWays(int n){

    long long int dp[n+1];
    dp[0]=1 , dp[1]=1, dp[2]=2;
    for(int i=3;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%1000000007;
    }
 return dp[n];

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      cout<<countWays(n)<<endl;
  }
 return 0;
}
