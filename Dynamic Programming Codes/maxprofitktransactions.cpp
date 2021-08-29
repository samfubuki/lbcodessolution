
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int maxProfit(int K, int N, int A[])
    {
        int dp[K+1][N];
        for(int t=1;t<=K;t++)
        {
            int maxval = INT_MIN;
            for(int d=1;d<N;d++)
            {
                /*if(t==0)
                {
                    dp[t][d]=0;
                }
                if(d==0)
                {
                    dp[t][d]=0;
                }
                */
                if(dp[t-1][d-1]-A[d-1]>maxval)
                {
                    maxval = dp[t-1][d-1] - A[d-1];
                }
                if(maxval+A[d]>dp[t][d-1])
                {
                    dp[t][d]=maxval+A[d];
                }
                else
                {
                    dp[t][d]=dp[t][d-1];
                }
            }
        }
     return dp[K][N-1];
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>K;
        cin>>N;
        int A[N];
        for(int i = 0; i < N; i++)
            cin>>A[i];

        Solution ob;
        cout<<ob.maxProfit(K, N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends
