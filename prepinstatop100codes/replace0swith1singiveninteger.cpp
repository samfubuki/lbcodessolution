#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,num1=0;
    cin>>num;
    if(num==0)
    {
        num1=1;
    }
    while(num>0)
    {
        int rem=num%10;
        if(rem==0)
        {
            rem=1;
        }
        num=num/10;
        num1=num1*10+rem;

    }
    cout<<"Converted Number is:"<<num1;
    return 0;
}
