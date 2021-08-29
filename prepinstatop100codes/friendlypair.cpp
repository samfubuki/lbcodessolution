#include<bits/stdc++.h>
using namespace std;
void friendlypair(int num1, int num2)
{
    int sum1=0,sum2=0;
    for(int i=1;i<=num1/2;i++)
    {
        if(num1%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(int i=1;i<=num2/2;i++)
    {
        if(num2%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(sum1==num2 && sum2==num1)
    {
        cout<<"Friendly Pair("<<num1<<","<<num2<<")";
    }
    else
    {
        cout<<"Not a Friendly Pair";
    }
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    friendlypair(num1,num2);
    return 0;
}
