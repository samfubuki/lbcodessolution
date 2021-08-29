#include<bits/stdc++.h>
using namespace std;
long long int countbitsfirst(long long int n)
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n = n & (n-1);
    }
 return cnt;
}
bool isPowerofTwo(long long n){

      long long int quant = countbitsfirst(n);
      if(quant==1)
      {
          return true;
      }
      else
      {
          return false;
      }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(isPowerofTwo(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
 return 0;
}
