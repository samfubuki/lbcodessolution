#include<iostream>
using namespace std;
int main()
{
    int num, reversenum=0, rem;
    cout<<"Enter a number:";
    cin>>num;
    do
    {
        rem = num%10;
        reversenum = reversenum*10 + rem;
        num /=10;
    }while(num!=0);
    cout<<"Reversed Number :"<<reversenum;
  return 0;
}
