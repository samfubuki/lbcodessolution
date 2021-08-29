#include<bits/stdc++.h>
using namespace std;
int longestSubsequence(int N, int A[])
    {
        int dp[N];
        for(int i=0;i<N;i++)
        {
            dp[i]=1;
        }
        for(int i=1;i<N;i++)
        {
            for(int j=0;j<i;j++)
            {
                if((A[i]==A[j]+1) || (A[i]==A[j]-1))
                {
                    dp[i]=max(dp[i] , dp[j]+1);
                }
            }
        }
     int result = 1;
     for(int i=0;i<N;i++)
     {
         if(result<dp[i])
         {
             result = dp[i];
         }
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<longestSubsequence(n , a)<<endl;
    }
  return 0;
}
