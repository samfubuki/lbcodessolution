// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template in C++

class Solution {
  public:
    bool isValid(int arr[], int n, int m, int mx)
{
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum + arr[i]>mx)
        {
            student++;
            sum=arr[i];
        if(student>m)
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
    int findPages(int arr[], int n, int m) {
    if(n<m)
    {
        return -1;
    }
    int start = 0, end, totalpage=0;
    for(int i=0;i<n;i++)
    {
        totalpage = totalpage + arr[i];
        start = max(start,arr[i]);
    }
    end = totalpage;
    int res = start;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isValid(arr,n,m,mid)==true)
        {
            res=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
 return res;//code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends
