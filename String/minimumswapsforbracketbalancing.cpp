#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int open=0,close=0,fault=0;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==']')
	        {
	          close++;
	          fault=close-open;
	        }
	        else
	        {
	            open++;
	            if(fault>0)
	            {
	              ans=ans+fault;
	              fault--;
	            }
	        }
	    }
	  cout<<ans<<endl;
	}
	return 0;
}
