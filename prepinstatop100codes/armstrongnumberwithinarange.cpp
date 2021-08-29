//C++ Program
//Armstrong number in a interval
#include<iostream>
#include<cmath>
using namespace std;
void armstrong(int num)
{
    int sum=0;
    int store = num;
    //find sum of cubes of individual digits
    do
    {
        int digit = num % 10;
        sum = sum + pow(digit,3);
        num = num / 10;
    }while(num > 0);
    //checking for ArmStrong number
    if(sum == store)
        cout << store <<"\t";
}
int main()
{
    int l_limit,u_limit;
    cout<<"Enter the range:\n";
    cin>>l_limit>>u_limit;
    cout<<"Armstrong numbers between "<<l_limit<<" and "<<u_limit<<" are:\n";
    for(int i=l_limit;i<=u_limit;i++)
        armstrong(i);
    return 0;
}
