#include<bits/stdc++.h>
using namespace std;
int Prime(int num)
    {
        int div=0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
                div++;
        }
        if(div==2)
            return 1;
        return 0;
    }
int main()
{
    int check = 0, n;
        cout<< "Enter a positive integer: ";
        //user input
        cin>>n;
        for(int i = 1; i <= n/2;i++)
        {
                // condition for i to be a prime number
                if (Prime(i))
                {
                        // condition for n-i to be a prime number
                        if (Prime(n�i))
                        {
                            cout<<n <<" = "<< i <<" + "<< n�i<< endl;
                            check = 1;
                        }
                }
        }
        if (check == 0)
                cout<<n<<" cannot be expressed as the sum of two prime numbers.";
        return 0;
}
