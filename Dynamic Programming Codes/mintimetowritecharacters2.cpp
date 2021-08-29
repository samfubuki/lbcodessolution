#include<bits/stdc++.h>
using namespace std;
class Solution{

	public:
	int minTimeForWritingChars(int N, int I,
                       int D, int C)
	{
	    if (N == 0)
	    {
	       return 0;
	    }
	    if (N == 1)
	    {
	     return I;
	    }
	    int dp[N + 1];
	    memset(dp, 0, sizeof(dp));
	    for(int i = 1; i <= N; i++)
	    {
	        if (i % 2 == 0)
	        {
			dp[i] = min(dp[i-1] + I,dp[i/2] + C);
	        }
	        else
	        {
	            dp[i] = min(dp[i-1] + I,dp[(i+1)/2] + C + D);
	        }
	    }
	  return dp[N];
	}
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,d,c;
        cin>>n>>i>>d>>c;
        Solution ob;
        cout<<ob.minTimeForWritingChars(n,i,d,c)<<endl;
    }
  return 0;
}
