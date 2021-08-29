#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<k;i++)
	    {
	        arr[i]=-arr[i];
	    }
	    int maxsum=0;
	    for(int i=0;i<n;i++)
	    {
	        maxsum=maxsum+arr[i];
	    }
	 cout<<maxsum<<endl;
	}
	return 0;
}
