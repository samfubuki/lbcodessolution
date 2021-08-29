// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        priority_queue<long long int , vector<long long int>, greater<long long int> > pq;
        long long minCost(long long arr[], long long n) {
        for(long long int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        long long int cost=0;
        while(pq.size()>=2)
        {
            long long int first = pq.top();
            pq.pop();
            long long int second = pq.top();
            pq.pop();
            cost = cost + first+second;
            pq.push(first+second);
        }
        return cost;
    }
};


// { Driver Code Starts.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
