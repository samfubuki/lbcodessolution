#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int cnt=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
            }
        }
       if(cnt==2)
      {
        cout<<" "<<i;
      }
      cnt=0;
    }
   return 0;
}
