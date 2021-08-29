#include<iostream>
using namespace std;
int main()
{
    //Initializing Variables
    char str[100], strnobrackets[100];
    int i=0, j=0;
    cout<<"Enter the String : ";
    cin>>str;
    while(str[i] != '\0')
    {
        if(str[i]!='(' && str[i]!=')')
        {
            strnobrackets[j++]=str[i];
        }
      i++;
    }
   strnobrackets[j]='\0';
   cout<<"The string after removing all spaces is : "<<strnobrackets;
 return 0;
}
