#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double exp,base;
    cout<<"Enter the base and exponent to be entered : ";
    cin>>base>>exp;
    double res = pow(base,exp);
    cout<<base<<"^"<<exp<<"=";
    cout<<fixed<<setprecision(2)<<res<<endl;
    return 0;
}
