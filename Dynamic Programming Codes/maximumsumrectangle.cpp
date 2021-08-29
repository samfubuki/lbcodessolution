#include <bits/stdc++.h>
using namespace std;
int kadanes(vector<int> arr[])
{
    int maxval = arr[0];
    int currmax = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        currmax = max(currmax+arr[i],arr[i]);
        maxval = max(currmax , maxval);
    }
 return maxval;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int rows , cols;
	    cin>>rows>>cols;
	    int mat[rows+1][cols];
	    for(int i=0;i<rows;i++)
	    {
	        for(int j=0;j<cols;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    int ans = 0;
	    for(int c1=0;c1<cols;c1++)
	    {
	        vector<int> rowsum[rows];
	        for(int c2=c1;c2<cols;c2++)
	        {
	            for(int i=0;i<rows;i++)
	            {
	                rowsum[i] += mat[i][c2];
	            }
	         ans = max(ans,kadanes(rowsum));
	        }
	    }
	  cout<<ans<<endl;
	}
	return 0;
}
