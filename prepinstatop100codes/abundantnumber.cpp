#include<bits/stdc++.h>
using namespace std;
int main()
{
    int div,num,sum=0;
    cin>>num;
    for(int i=1;i<num;i++)
    {
        div=num%i;
        if(div==0)
        {
            sum=sum+i;
        }
    }
    if(sum>num)
    {
        cout<<num<<" is an Abundant Number . ";
    }
    else
    {
        cout<<num<<" not an Abundant Number . ";
    }
 return 0;
}
