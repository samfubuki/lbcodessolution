#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int div=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        cout<<"Number is a prime number";
    }
    else
    {
        cout<<"Number not a prime number";
    }
 return 0;
}
