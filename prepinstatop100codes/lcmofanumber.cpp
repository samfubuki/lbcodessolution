#include<bits/stdc++.h>
using namespace std;
int findlcm(int first, int second)
{
    static int fact = first;
    if(fact%first==0 && fact%second==0)
    {
       return fact;
    }
    else
    {
        fact=fact+first;
        findlcm(first,second);
    }
  return fact;
}
int main()
{
    int first,second;
    cin>>first>>second;
    cout<<findlcm(first,second)<<"is the lcm of two numbers";
    return 0;
}
