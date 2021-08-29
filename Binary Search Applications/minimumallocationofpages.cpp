#include <bits/stdc++.h>
using namespace std;
bool isValid(long long int arr[], long long int n, long long int k, long long int mx)
{
    long long int student=1;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        if(sum + arr[i]>mx)
        {
            student++;
            sum=arr[i];
        if(student>k)
        {
            return false;
        }
        }
        else
        {
            sum = sum + arr[i];
        }
    }
return true;
}
long long int minpage(long long int arr[], long long int n, long long int k)
{
    if(n<k)
    {
        return -1;
    }
    long long start = 0, end, totalpage=0;
    for(int i=0;i<n;i++)
    {
        totalpage = totalpage + arr[i];
        start = max(start,arr[i]);
    }
    end = totalpage;
    long long int res = start;
    while(start<=end)
    {
        long long int mid = start + (end-start)/2;
        if(isValid(arr,n,k,mid)==true)
        {
            res=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
 return res;
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long int k;
	    cin>>k;
	 cout<<minpage(arr,n,k)<<endl;
	}
	return 0;
}
