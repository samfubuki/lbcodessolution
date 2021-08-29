#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];

		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}




int sb(int arr[], int n, int x)
{
    int mi=INT_MAX;
    int i=0,j=0;
    int s=0;
    while(i<=j && j<n)
    {
    while(s<=x && j<n)
    {
        s=s+arr[j++];
    }
    while(s>x && i<j)
    {
        mi = min(mi,j-i);
        s=s-arr[i];
        i++;
    }
    }
 return mi;

}
