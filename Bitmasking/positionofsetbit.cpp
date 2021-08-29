#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countbitsfast(int n)
    {
        int cnt = 0;
        while(n)
        {
            cnt++;
            n = n & (n-1);
        }
     return cnt;
    }
    bool powerof2(int n)
    {
        int ans = countbitsfast(n);
        if(ans==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int findPosition(int N) {
       if(!powerof2(N))
       {
           return -1;
       }
       int cnt = 0;
       while(N)
       {
           N = N>>1;
           cnt++;
       }
      return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  //
