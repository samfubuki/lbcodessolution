#include<bits/stdc++.h>
using namespace std;
int gcd(int first, int second)
{
    if(first==0)
    {
        return second;
    }
    if(second==0)
    {
        return first;
    }
    if(first==second)
    {
        return first;
    }
    else if(first>second)
    {
        return gcd(first-second,second);
    }
    else
    {
        return gcd(first,second-first);
    }
}
int main()
{
    int first,second;
    cin>>first>>second;
    cout<<"GCD of two numbers is:"<<gcd(first,second);
    return 0;
}
