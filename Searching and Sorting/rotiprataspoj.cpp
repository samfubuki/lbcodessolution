#include<bits/stdc++.h>
using namespace std;
int solve(int *arr , int n, int par, int mid)
{
    int time=0;
    int prata=0;
    for(int i=0;i<n;i++)
    {
        time = arr[i];
        int j=2;
        while(time<=mid)
        {
            prata++;
            time = time + (arr[i]*j);
            j++;
        }
        if(prata>=par)
        {
            return 1;
        }

    }
  return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int par;
        cin>>par;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int lb=0;
        int ub =1e8;
        int ans=0;
        while(lb<=ub)
        {
            int mid = lb + (ub-lb)/2;
            if(solve(arr,n,par,mid))
            {
                ans=mid;
                ub=mid-1;
            }
            else
            {
                lb=mid+1;
            }
        }
      cout<<ans<<endl;
    }
}
