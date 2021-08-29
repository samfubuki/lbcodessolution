#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
bool subArrayExists(int arr[], int n)
{
  int sum = 0;
  unordered_map<int,int> mp;
  int f=0;
  for(int i=0;i<n;i++)
  {
      sum = sum + arr[i];
      if(sum==0 || mp[sum] || arr[i]==0)
      {
          f=1;
          break;
      }
      else
      {
          mp[sum]=1;
      }
  }
  if(f==1)
  {
      return true;
  }
  else
  {
      return false;
  }
}



