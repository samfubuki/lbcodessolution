#include<bits/stdc++.h>
using namespace std;
int optimalbst(int keys[] , int frequency[] , int n)
{
    int dp[n][n];
    int psa[n];
    psa[0]=frequency[0];
    for(int i=1;i<n;i++)
    {
        psa[i] = psa[i-1] + frequency[i];
    }
    for(int g=0;g<n;g++)
    {
      for(int i=0,j=g;j<n;i++,j++)
      {
        if(g==0)
        {
            dp[i][j] = frequency[i];
        }
        else if(g==1)
        {
            int f1 = frequency[i];
            int f2 = frequency[j];
            dp[i][j] = min(f1 + 2*f2 , f2 + 2*f1);
        }
        else
        {
            int minval = INT_MAX;
            int fs = (psa[j] - ((i==0)?0:psa[i-1]));
            for(int k=i;k<=j;k++)
            {
                int left = (k==i)?0:dp[i][k-1];
                int right = (k==j)?0:dp[k+1][j];
                if(left+right+fs<minval)
                {
                    minval = left + right + fs;
                }

            }
          dp[i][j] = minval;
        }
      }
    }
 return dp[0][n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int keys[n];
        int frequency[n];
        for(int i=0;i<n;i++)
        {
            cin>>keys[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>frequency[i];
        }
        cout<<optimalbst(keys,frequency,n)<<endl;

    }
 return 0;
}
