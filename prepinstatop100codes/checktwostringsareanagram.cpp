#include<iostream>
using namespace std;
int main()
{
    char str1[100], str2[100];
    int first[26]={0}, second[26]={0}, c=0, flag=0;
    cout<<"Enter the first String";
    cin>>str1;
    cout<<"Enter the second string";
    cin>>str2;
    //calculating frequency of characters in first string
    while(str1[c] != '\0')
    {
        first[str1[c]-'a']++;
        c++;
    }
    c=0;
    //calculate frequency of characters in second string
    while(str2[c]!='\0')
    {
        second[str2[c]-'a']++;
        c++;
    }
    for(c=0;c<26;c++)
    {
        if(first[c]!=second[c])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Strings are anagram";
    }
    else
    {
        cout<<"Strings are not anagram";
    }
  return 0;

}
