#include<bits/stdc++.h>
using namespace std;
int countPS(string str)
{
   int dp[str.length()][str.length()];
   for(int g=0;g<str.length();g++)
   {
       for(int i=0, j=g;j<str.length();i++,j++)
       {
           if(g==0)
           {
               dp[i][j]=1;
           }
           else if(g==1)
           {
               if(str[i]==str[j])
               {
                   dp[i][j]=3;
               }
               else
               {
                   dp[i][j]=2;
               }
           }
           else
           {
               if(str[i]==str[j])
               {
                   dp[i][j]=dp[i][j-1] + dp[i+1][j] + 1;
               }
               else
               {
                   dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
               }
           }
       }


   }
  return dp[0][str.length()-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<countPS(str)<<endl;
    }
  return 0;
}
