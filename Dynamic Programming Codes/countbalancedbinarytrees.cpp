#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int countBT(int h) {
        long long int dp[h+1];
        dp[0]=dp[1]=1;
        for(int i=2;i<=h;i++)
        {
            dp[i]=(dp[i-1]*((2*dp[i-2])%1000000007 +(dp[i-1])%1000000007))%1000000007 ;
        }
     return dp[h];
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h;
        cin>>h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;
    }
  return 0;
}
