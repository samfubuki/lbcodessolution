#include<bits/stdc++.h>
using namespace std;
void prime(int num)
{
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
      cout<<num<<endl;
  }
}
int main()
{
    int lowerlimit,upperlimit;
    cin>>lowerlimit>>upperlimit;
    cout<<"The prime numbers between "<<lowerlimit<<" and "<<upperlimit<<" are:"<<endl;
    for(int i=lowerlimit;i<=upperlimit;i++)
    {
        prime(i);
    }
  return 0;
}
