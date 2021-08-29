#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int reversenum = 0;
    int digit;
    int temp=num;
    do
    {
        digit = num%10;
        reversenum = (reversenum*10) + digit;
        num=num/10;
    }while(num!=0);
 if(reversenum==temp)
 {
     cout<<"Number is a palindrome";
 }
 else
 {
     cout<<"Number is not a palindrome";
 }
return 0;
}
