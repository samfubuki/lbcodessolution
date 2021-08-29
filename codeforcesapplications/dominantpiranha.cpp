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
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long long int min=INT_MAX;
	    long long int max=INT_MIN ;
	    int index=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<min)
	        {
	            min=a[i];
	        }
	        if(a[i]>max)
	        {
	            max=a[i];
	            index=i;
	        }
	    }
	    if(min==max)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        int flag=0;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]==max && ((a[i-1]<max && i-1>0 )|| (a[i+1]<max && i+1<n)))
	            {
	                cout<<i+1<<endl;
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            cout<<index+1<<endl;
	        }
	    }
	}
	return 0;
}
