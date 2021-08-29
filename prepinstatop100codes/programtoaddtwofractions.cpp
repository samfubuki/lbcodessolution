#include<bits/stdc++.h>
using namespace std;
int findgcd(int n1, int n2)
{
        int gcd;
        for(int i=1; i <= n1 && i <= n2; i++)
        {
            if(n1%i==0 && n2%i==0)
                gcd = i;
        }
        return gcd;
}
int main()
{
    int num1,den1;
    cin>>num1>>den1;
    int num2,den2;
    cin>>num2>>den2;
    int lcm = (den1*den2)/findgcd(den1,den2);
    int sum = (num1*lcm/den1)+(num2*lcm/den2);
    int num3=sum/findgcd(sum,lcm);
    lcm=lcm/findgcd(sum,lcm);
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
    return 0;
}
