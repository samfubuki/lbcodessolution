#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int m;
        cin>>m;
        sort(arr,arr+n);
        int minval=INT_MAX;
        for(int i=0;i+m-1<n;i++)
        {
            long long int currmin = arr[i+m-1]-arr[i];
            if(currmin<minval)
            {
                minval=currmin;
            }
        }
    cout<<minval<<endl;
    }
	return 0;
}
