#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int x,y,l,r;
      cin>>x>>y>>l>>r;
      int mask = (1<<(r-l+1));
      mask--;
      mask = (mask<<(l-1));
      mask = (mask & y);
      x = x | mask;
      cout<<x<<endl;
  }
  return 0;
}
