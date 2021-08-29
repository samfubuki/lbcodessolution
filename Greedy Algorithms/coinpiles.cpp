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

        int a[n],sum=0,pre[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n);

        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            pre[i]=sum;
        }

        int ans=INT_MAX;

        for(int i=0;i<n;i++)
        {
            int ind=upper_bound(a,a+n,a[i]+k)-a;
            ind--;

            int y=(n-ind-1)*(a[i]+k);
            int x=pre[n-1]-pre[ind];
            x=x-y;
            if(i!=0)
            {
            x+=pre[i-1];
            }
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }
	return 0;
}
