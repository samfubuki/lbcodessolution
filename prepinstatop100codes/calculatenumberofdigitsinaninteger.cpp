#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int digitcnt=0;
    do
    {
        num=num/10;
        digitcnt++;
    }while(num!=0);
  cout<<"Number of digits in the integer : "<<digitcnt;
  return 0;
}
