// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array

        vector<ll> arr(n,0);

        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements

        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
 long long int cnt=0;
 int i=-1;
 long long int sum=0;
 unordered_map<int,int> mp;
 mp[0]=1;
 while(i<n-1)
 {
     i++;
     sum=sum+arr[i];
     if(mp.find(sum)!=mp.end())
     {
         cnt=cnt+mp[sum];
         mp[sum]++;

     }
     else
     {
         mp[sum]++;
     }

 }
 return cnt;
}

