#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int low=0,high=a[n-1];
		int mid,best=0;
		while(low<=high)
		{
			mid = low + (high-low)/2;
			int cnt=1, left=0;
			for(int i=1;i<n && cnt<c;i++)
			{
				if(a[i]-a[left]>=mid)
				{
					left=i;
					cnt++;
				}
			}
			if(cnt>=c)
			{
				best=mid;
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	 cout<<best<<endl;
	}

	return 0;
}
