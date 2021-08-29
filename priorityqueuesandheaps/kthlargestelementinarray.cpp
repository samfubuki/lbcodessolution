// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k) {
	   priority_queue<int> pq;
	   for(int i=0;i<n;i++)
	   {
	       pq.push(arr[i]);
	   }
	   vector<int> final;
	   for(int i=0;i<k;i++)
	   {
	       final.push_back(pq.top());
	       pq.pop();
	   }
	   return final;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
