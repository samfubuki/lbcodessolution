#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int i,j,len=0;
    cout<<"Enter a String  : ";
    cin>>str;
    len = strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
         len--;
        }
    }
 cout<<"The string is :"<<str;
 return 0;
}
