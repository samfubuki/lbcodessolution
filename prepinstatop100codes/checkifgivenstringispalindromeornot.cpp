#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,length=0,flag=0;
    gets(str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]==str[length-i-1])
        {
            flag++;
        }
    }
    if(flag==i)
    {
        cout<<"String entered is palindrome:";
    }
    else
    {
        cout<<"String entered is not a palindrome";
    }
  return 0;
}
