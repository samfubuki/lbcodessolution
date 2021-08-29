#include<bits/stdc++.h>
using namespace std;

class Solution{


	public:
	long long getCount(int N)
	{
		long long int dp[N+1][10];
		for(int i=1;i<=N;i++)
		{
		    for(int j=0;j<=9;j++)
		    {
		        if(i==0)
		        {
		            dp[i][j]=0;
		        }
		        else if(i==1)
		        {
		            dp[i][j]=1;
		        }
		        else
		        {
		            if(j==0)
		            {
		                dp[i][j] = dp[i-1][0] + dp[i-1][8];
		            }
		            else if(j==1)
		            {
		                dp[i][j] = dp[i-1][1] + dp[i-1][2] + dp[i-1][4];
		            }
		            else if(j==2)
		            {
		                dp[i][j] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][5];
		            }
		            else if(j==3)
		            {
		                dp[i][j] = dp[i-1][2] + dp[i-1][3] + dp[i-1][6];
		            }
		            else if(j==4)
		            {
		                dp[i][j] = dp[i-1][1] + dp[i-1][4] + dp[i-1][5] + dp[i-1][7];
		            }
		            else if(j==5)
		            {
		                dp[i][j] = dp[i-1][2] + dp[i-1][4] + dp[i-1][5] + dp[i-1][6] + dp[i-1][8];
		            }
		            else if(j==6)
		            {
		                dp[i][j] = dp[i-1][3] + dp[i-1][5] + dp[i-1][6] + dp[i-1][9];
		            }
		            else if(j==7)
		            {
		                dp[i][j] = dp[i-1][4] + dp[i-1][7] + dp[i-1][8];
		            }
		            else if(j==8)
		            {
		                dp[i][j] = dp[i-1][5] + dp[i-1][7] + dp[i-1][8] + dp[i-1][9] + dp[i-1][0];
		            }
		            else if(j==9)
		            {
		                dp[i][j] = dp[i-1][6]+dp[i-1][8]+dp[i-1][9];
		            }
		        }
		    }
		}
		long long int sum = dp[N][0] + dp[N][1] + dp[N][2] + dp[N][3] + dp[N][4] + dp[N][5]
		                    + dp[N][6] + dp[N][7] + dp[N][8] + dp[N][9];
		return sum;
	}


};

// { Driver Code Starts.
int main()
{


   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;



	    Solution ob;
	    cout << ob.getCount(n) << "\n";

    }
    return 0;
}
  // } Driver Code Ends
