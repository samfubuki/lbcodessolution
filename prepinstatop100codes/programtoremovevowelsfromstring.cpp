#include<bits/stdc++.h>
using namespace std;
int main()
{
   char str[100];
   gets(str);
   int i,j,len;
   len = strlen(str);
   for(i=0;i<len;i++)
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
   cout<<"String with vowel removal is: "<<str;
   return 0;
}
