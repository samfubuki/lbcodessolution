#include<iostream>
#include<cmath>
using namespace std;
int convert(long long int n)
{
    int i=0, decimal=0;
    while(n!=0)
    {
        int rem = n%10;
        n/=10;
        int res = rem * pow(2,i);
        decimal += res;
        i++;
    }
  return decimal;
}
int main()
{
    long long int binary;
    cout<<"Enter binary number : ";
    cin>>binary;
    cout<<"Decimal Number is : "<<convert(binary);
    return 0;
}
