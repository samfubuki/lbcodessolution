#include<bits/stdc++.h>
using namespace std;
bool solve(long long int *arr, long long int n, long long int m, long long int mid)
{
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            sum = sum + arr[i]-mid;
        }
    }
    if(sum>=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int lb=0;
    long long int ans=0;
    long long int ub = *max_element(arr,arr+n);
    while(lb<=ub)
    {
        long long int mid = (lb + ub)/2;
        if(solve(arr,n,m,mid))
        {
            ans=mid;
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
   cout<<ans;
   return 0;
}
