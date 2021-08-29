#include<bits/stdc++.h>
using namespace std;
int distribution(int arr[], int n)
{
    sort(arr,arr+n);
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            cnt++;
        }
    }
   return min(cnt,n/2);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<distribution(arr,n);
    cout<<endl;
    return 0;
}
