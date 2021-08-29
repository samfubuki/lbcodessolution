#include<bits/stdc++.h>
using namespace std;
long long maximumAmount(int arr[], int n)
{
    long long int dp[n][n];
    for(int g=0;g<n;g++)
    {
        for(int i=0,j=g;j<n;i++,j++)
        {
            if(g==0)
            {
                dp[i][j]=arr[i];
            }
            else if(g==1)
            {
                dp[i][j] = max(arr[i],arr[j]);
            }
            else
            {
                long long int val1 = arr[i] + min(dp[i+2][j],dp[i+1][j-1]);
                long long int val2 = arr[j] + min(dp[i+1][j-1],dp[i][j-2]);
                long long int val = max(val1 , val2);
                dp[i][j]=val;
            }


        }
    }
 return dp[0][n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<maximumAmount(arr,n)<<endl;
    }
  return 0;
}
