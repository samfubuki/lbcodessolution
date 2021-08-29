#include <bits/stdc++.h>
using namespace std;

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
        sort(arr,arr+n);
        long long int maxsum=0;
        for(int i=0;i<n;i++)
        {
            maxsum=maxsum+arr[i]*i;
        }
        long long int ans = (maxsum)%(1000000007);
        cout<<ans<<endl;
    }
	return 0;
}
