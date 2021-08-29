#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m],b[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	    unordered_map<int,int> mp;
	    for(int i=0;i<m;i++)
	    {
	        mp[a[i]]++;
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(mp[b[i]])
	        {
	            c++;
	        }
	    }
	    if(c!=n)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
