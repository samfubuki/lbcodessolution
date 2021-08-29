#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){

    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
        maxi = max(sum,maxi);
        if(sum<0)
        {
            sum=0;
        }
    }
 return maxi;

}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<maxSubarraySum(arr,n)<<endl;
    }
  return 0;
}
