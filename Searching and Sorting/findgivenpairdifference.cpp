#include <bits/stdc++.h>
using namespace std;
int binarysearch(long long int arr[],long long int l, long long int r, long long int x)
{
    if(l<=r)
    {
        long long int mid = l + (r-l)/2;
        if(x==arr[mid])
        {
            return 1;
        }
        if(x<arr[mid])
        {
            return binarysearch(arr,l,mid-1,x);
        }
        if(x>arr[mid])
        {
            return binarysearch(arr,mid+1,r,x);
        }

    }
 return 0;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,x1,x2;
	    cin>>n>>k;
	    long long int arr[n];
	    int flag=0;
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(long long int i=0;i<n;i++)
	    {
	        x1 = k+arr[i];
	        x2 = abs(k-arr[i]);
	        if(binarysearch(arr,0,n-1,x1) || binarysearch(arr,0,n-1,x2))
	        {
	            flag=1;
	            break;
	        }
	    }
	 if(flag==1)
	 {
	     cout<<1<<endl;
	 }
	 else
	 {
	     cout<<-1<<endl;
	 }
	}
	return 0;
}
