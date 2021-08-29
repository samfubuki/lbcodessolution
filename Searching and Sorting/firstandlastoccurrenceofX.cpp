#include <iostream>
using namespace std;
int firstoccur(int arr[], int n, int ele)
{
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ele==arr[mid])
        {
            res = mid;
            end = mid-1;
        }
        else if(ele<arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
 return res;
}
int lastoccur(int arr[], int n, int ele)
{
    int start=0;
    int end = n-1;
    int res = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(ele==arr[mid])
        {
            res = mid;
            start = mid+1;
        }
        else if(ele<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
return res;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ele;
	    cin>>n>>ele;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	  int fo = firstoccur(arr,n,ele);
	  int lo = lastoccur(arr,n,ele);
	  if(fo==-1 || lo==-1)
	  {
	    cout<<"-1";
	  }
	  else
	  {
	      cout<<fo<<" "<<lo;
	  }
	  cout<<endl;
	}
	return 0;
}
