#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        char k[1000];
        for(int i=0;i<n;i++)
        {
            cin>>k[i];
        }
        if(h>c0 && h>c1)
        {
            int sum1=0;
            for(int i=0;i<n;i++)
            {
                if(k[i]=='0')
                {
                    sum1 = sum1 + c0;
                }
                else if(k[i]=='1')
                {
                    sum1 = sum1 + c1;
                }
            }
          cout<<sum1<<endl;
        }
        else if(c0>h && c0>c1)
        {
            int sum2=0,sum3=0;
            for(int i=0;i<n;i++)
            {
                if(k[i]=='0')
                {
                    sum2 = sum2 + h;
                }
            }
            sum3=sum3+n*c1;
            cout<<(sum2+sum3)<<endl;
        }
        else if(c1>c0 && c1>h)
        {
            int sum4=0,sum5=0;
             for(int i=0;i<n;i++)
            {
                if(k[i]=='1')
                {
                    sum4 = sum4 + h;
                }
            }
            sum5 = sum5 + n*c0;
            cout<<(sum4+sum5)<<endl;
        }
        else if(c1==c0 && c0==h)
        {
            int sum6=0;
            for(int i=0;i<n;i++)
            {
                if(k[i]=='0')
                {
                    sum6 = sum6 + c0;
                }
                else if(k[i]=='1')
                {
                    sum6 = sum6 + c1;
                }
            }
          cout<<sum6<<endl;
        }


    }
  return 0;
}
