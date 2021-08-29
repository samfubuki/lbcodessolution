#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int cnt=0;
    while(n)
    {
        int k=n%10;
        n=n/10;
        if(k==d)
        {
            cnt++;
        }
    }
   cout<<cnt;
   return 0;
}
