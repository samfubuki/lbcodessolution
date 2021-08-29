#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ip, sum = 0;
    cout<<"Enter the number to check :";
    cin>>ip;
    int save=ip;
    while(ip)
    {
        int num = ip%10;
        int fact = 1;
        for(int i=num; i>0 ; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        ip = ip/10;
    }
    if(sum==save)
    {
        cout<<save<<" is a strong number : ";
    }
    else
    {
        cout<<save<<" is not a strong number : ";
    }
 return 0;
}
