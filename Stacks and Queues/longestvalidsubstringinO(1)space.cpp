// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
     int left=0 , right=0 , maxlength=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='(')
         {
             left++;
         }
         else
         {
             right++;
         }
         if(left==right)
         {
             maxlength = max(maxlength,2*right);
         }
         else if(right>=left)
         {
             left=right=0;
         }
     }
     left=0,right=0;
     for(int i=s.length()-1;i>=0;i--)
     {
         if(s[i]=='(')
         {
             left++;
         }
         else
         {
             right++;
         }
         if(left==right)
         {
             maxlength = max(maxlength,2*left);
         }
         else if(left>=right)
         {
             left=0 , right=0;
         }
     }
     return maxlength;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
