#include <bits/stdc++.h>
using namespace std;
int maxsumpairdiff(int arr[] , int n , int k)
{
    sort(arr,arr+n);
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1];
        if(arr[i]-arr[i-1]<k)
        {
            if(i>=2)
            {
                dp[i]=max(dp[i],dp[i-2]+arr[i]+arr[i-1]);
            }
            else
            {
                dp[i]=max(dp[i],arr[i]+arr[i-1]);
            }
        }
    }
 return dp[n-1];
}
int main() {
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
        int k;
        cin>>k;
        cout<<maxsumpairdiff(arr , n , k)<<endl;
    }
	return 0;
}
