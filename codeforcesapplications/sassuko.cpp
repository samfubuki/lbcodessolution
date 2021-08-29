#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        int j=0;
        while(j<n)
        {
            if(arr[j]>0 && arr[j+1]>0)
            {
                cout<<((-1)*arr[j+1])<<" "<<arr[j]<<" ";
            }
             if(arr[j]>0 && arr[j+1]<0)
            {
                cout<<abs(arr[j+1])<<" "<<abs(arr[j])<<" ";
            }
             if(arr[j]<0 && arr[j+1]<0)
            {
                cout<<((-1)*arr[j+1])<<" "<<arr[j]<<" ";
            }
             if(arr[j]<0 && arr[j+1]>0)
            {
                cout<<abs(arr[j+1])<<" "<<abs(arr[j])<<" ";
            }
         j=j+2;
        }
      cout<<endl;
    }
return 0;
}
