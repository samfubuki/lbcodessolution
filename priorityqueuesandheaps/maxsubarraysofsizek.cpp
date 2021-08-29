// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        vector <int> max_of_subarrays(int *arr, int n, int k){
        deque<int> dq;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty() && arr[i]>=arr[dq.back()])
            {
                dq.pop_back();
            }
          dq.push_back(i);
        }
        vector<int> final;
        for(int i=k;i<n;i++)
        {
            final.push_back(arr[dq.front()]);
            while(!dq.empty() && (i-k)>=dq.front())
            {
                dq.pop_front();
            }
            while(!dq.empty() && arr[i]>=arr[dq.back()])
            {
                dq.pop_back();
            }
         dq.push_back(i);
        }
    final.push_back(arr[dq.front()]);
    return final;
    }
};

// { Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while(t--){

	    int n, k;
	    cin >> n >> k;

	    int arr[n];
	    for(int i = 0;i<n;i++)
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	    cout << endl;

	}

	return 0;
}  // } Driver Code Ends
