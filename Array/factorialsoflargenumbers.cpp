#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[1000000];
	    fill(arr,arr+1000000,-1);
	    int start=0,carry=0;
	    arr[0]=1;
	    for(int i=2;i<=n;i++)
	    {
	        for(int j=0;j<=start;j++)
	        {
	            int multiply = arr[j]*i+carry;
	            arr[j]=multiply%10;
	            carry = multiply/10;
	        }
	        while(carry!=0)
	        {
	            arr[++start]=carry%10;
	            carry=carry/10;
	        }
	    }
	    for(int i=start;i>=0;i--)
	    {
	        cout<<arr[i];
	    }
	   cout<<endl;
	}
	return 0;
}
