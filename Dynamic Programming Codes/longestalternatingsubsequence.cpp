#include <bits/stdc++.h>
using namespace std;
int las(int arr[], int n)
{
    int inc=1;
    int dec=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            inc = dec + 1;
        }
        else if(arr[i]<arr[i-1])
        {
            dec = inc + 1;
        }
    }
 return max(inc,dec);
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
	 cout<<las(arr,n)<<endl;
	}
	return 0;
}
