#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"The toggled string is :"<<str;
    return 0;
}
