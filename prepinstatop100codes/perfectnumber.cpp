#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number to check whether it is a perfect number or not :";
    cin>>num;
    int div,sum=0;
    for(int i=1;i<num;i++)
    {
        div = num%i;
        if(div == 0)
        {
            sum = sum + i;
        }
    }
    if(sum==num)
    {
        cout<<num<<" is a perfect number";
    }
    else
    {
        cout<<num<<" is not a perfect number";
    }
 return 0;
}
