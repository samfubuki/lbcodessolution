#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int cnt=0;
	    int cnt2=0;
	    int i=0;
	    while(a[i]!=1)
	    {
	        i++;
	    }
	    for(i;i<n;)
	    {
	        if(a[i]==1)
	        {
	            cnt+=cnt2;
	            cnt2=0;
	            i++;
	        }
	        else
	        {
	            cnt2++;
	            i++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
