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
    for(i=0;i<len/2;i++)
    {
      //Checking if string is palindrome or not.
      if(str[i]==str[len-i-1])
      flag++;

    }
    if(flag==i)
    {
        cout<<"String entered is a palindrome";
    }
    else
    {
        cout<<"String not a palindrome";
    }
 return 0;
}
