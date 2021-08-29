#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the limit of fibonacci series: ";
    cin>>num;
    int first=0, second=1;
    int next;
    cout<<"The first"<<num<<"terms of the fibonacci series are:"<<endl;
    for(int p=0;p<num;p++)
    {
        if(p<=1)
        {
            next=p;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
      cout<<next<<" ";
    }
  return 0;
}
