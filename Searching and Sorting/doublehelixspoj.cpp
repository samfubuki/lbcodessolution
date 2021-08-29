#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        long long int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            long long int a[n];
            for(long long int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            long long int m;
            cin>>m;
            long long int b[m];
            for(long long int i=0;i<m;i++)
            {
                cin>>b[i];
            }
            long long int s1=0,s2=0;
            long long int i=0,j=0;
            long long int ma=0;
            while(i<m && j<m)
            {
              if(a[i]<b[j])
              {
                  s1=s1+a[i];
                  i++;
              }
              else if(b[j]<a[i])
              {
                  s2=s2+b[j];
                  j++;
              }
              else
              {
                  ma=ma+max(s1,s2)+a[i];
                  s1=0,s2=0;
                  i++;
                  j++;
              }
            }
            while(i<n)
            {
                s1=s1+a[i];
                i++;
            }
            while(j<m)
            {
                s2=s2+b[j];
                j++;
            }
            ma=ma+max(s1,s2);
            cout<<ma<<endl;
        }
    }
  return 0;
}
