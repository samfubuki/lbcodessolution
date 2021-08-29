#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    do
    {
        sum = sum + num%10;
        num = num/10;
    }while(num!=0);
    cout<<"Sum of the digits of the given integer is: "<<sum;
 return 0;
}
