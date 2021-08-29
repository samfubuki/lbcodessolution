#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    unordered_map<int,int> mp;
	    int maxele=0;
	    for(int i=0;i<n;i++)
	    {
	        mp[s[i]]++;
	        if(mp[s[i]]>maxele)
	        {
	            maxele = mp[s[i]];
	        }

	    }
	    if(maxele<=n-maxele+1)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
