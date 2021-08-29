// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	bool ispalindrome(string S , int i , int j)
	{
	    if(i==j)
	    {
	        return true;
	    }
	    if(i>j)
	    {
	        return true;
	    }
	    while(i<j)
	    {
	        if(S[i]!=S[j])
	        {
	            return false;
	        }
	        i++;
	        j--;
	    }
	 return true;
	}
	int isPlaindrome(string S)
	{
	    int i=0;
	    int j=S.length()-1;
	    if(ispalindrome(S,i,j))
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}

};

// { Driver Code Starts.

int main()
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
