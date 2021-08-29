#include <bits/stdc++.h>
using namespace std;
int minval(int a , int b, int c)
{
     if (a <= b && a <= c)
        return a;

    else if (b <= a && b <= c)
        return b;

    else
        return c;
}
int maxsizesubsquare(int C[][51] , int n , int m)
{
    int table[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 || j==0)
            {
                table[i][j] = C[i][j];
            }
            else if(C[i][j]==0)
            {
                table[i][j]=0;
            }
            else
            {
                table[i][j] = minval(table[i-1][j] , table[i-1][j-1] , table[i][j-1])+1;
            }
        }
    }
  int maxvalue = 0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(table[i][j]>maxvalue)
          {
              maxvalue = table[i][j];
          }
      }
  }
 return maxvalue;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int C[51][51];
	for(int i=0; i<n; i++)
	 {
	   for(int j=0; j<m; j++)
	    {
	     cin >> C[i][j];
	    }
	  }
    cout<< maxsizesubsquare(C , n , m)<<endl;
	}

	return 0;
}
