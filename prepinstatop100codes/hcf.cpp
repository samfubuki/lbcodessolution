#include<iostream>
using namespace std;
int findgcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    else if(a>b)
    {
        return findgcd(a-b,b);
    }
    return findgcd(a,b-a);
}
int main()
{
    int a,b;
    cout<<"Enter two numbers whose HCF has to be found : ";
    cin>>a>>b;
    cout<<"HCF IS :"<<findgcd(a,b)<<endl;
    return 0;

}
