 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
 sort(arr,arr+n);
 sort(dep,dep+n);
 int platform=1;
 int start=1;
 int end=0;
 while(start<n)
 {
     if(dep[end]>=arr[start])
     {
         platform++;
         start++;
     }
     else
     {
         end++;
         start++;
     }
 }
 return platform;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
           for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    }
   return 0;
}  // } Driver Code Ends
