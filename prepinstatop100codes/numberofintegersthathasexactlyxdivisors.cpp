#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,divisor;
    cin>>number>>divisor;
    int cnt=0;
    for(int i=0;i<=number;i++)
    {
        int cnt1=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cnt1++;
            }
        }
        if(cnt1==divisor)
        {
            cnt++;
            cout<<i<<" ";
        }
    }

  cout<<"\n"<<cnt;
  return 0;
}
