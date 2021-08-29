// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int> mp;
        for(int x=0;x<n;x++)
        {
            mp[arr[x]]++;
        }
        int prev=0, largest=0;
        string ans,pre;
        for(auto x:mp)
        {
            largest = max(largest,x.second);
        }
        for(auto x:mp)
        {
            if(x.second<largest)
            {
                if(x.second>prev)
                {
                    pre=x.first;
                    prev=x.second;
                }
            }
        }
     return pre;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
