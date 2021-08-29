#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int i,j,len=0;
    int flag=0;
    cout<<"Enter a String  : ";
    cin>>str;
    len = strlen(str);
    cout<<"The reverse string is: ";
    for(i = len - 1; i >= 0; i--)
    {
        cout<<str[i];
    }

    return 0;
}
