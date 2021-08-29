#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int maxSubstring(string S)
	{
	    int ans = 0;
	    int countsum = 0;
	    for(int i=0;i<S.length();i++)
	    {
	        int val = 0;
	        if(S[i]=='0')
	        {
	            val = +1;
	        }
	        else if(S[i]=='1')
	        {
	            val = -1;
	        }
	        if(countsum>0)
	        {
	            countsum = countsum + val;
	        }
	        else
	        {
	            countsum = val;
	        }
	        if(countsum>ans)
	        {
	           ans=countsum;
	        }
	    }
	    if(ans==0)
	    {
	        ans=-1;
	    }
	    return ans;
	    }

};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxSubstring(s)<<endl;
    }
 return 0;
}
