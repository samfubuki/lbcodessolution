#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a positive number : ";
    cin>>num;
    cout<<"Factors of "<<num<<" are : "<<endl;
    //finding and printing factors
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            cout<<i<<"\t";
        }
    }
 return 0;

}
