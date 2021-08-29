#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int resmin=0,i=0,j=n-1;
	    while(i<=j)
	    {
	        resmin=resmin+arr[i];
	        i++;
	        j=j-k;
	    }
	    sort(arr,arr+n,greater<int>());
	    int resmax=0;
	    i=0,j=n-1;
	    while(i<=j)
	    {
	        resmax=resmax+arr[i];
	        i++;
	        j=j-k;
	    }
	    cout<<resmin<<" "<<resmax<<endl;
	}
	return 0;
}
