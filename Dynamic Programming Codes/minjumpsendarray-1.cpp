#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n)
{
    if(n<=1)
    {
        return 0;
    }
    if(arr[0]==0)
    {
        return -1;
    }
    int maxreachable , jumps , stepsPossible;
    maxreachable = arr[0];
    jumps = 1;
    stepsPossible = arr[0];
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            return jumps;
        }
        maxreachable = max(maxreachable , i+arr[i]);
        stepsPossible--;
        if(stepsPossible==0)
        {
            jumps++;
            if(i>=maxreachable)
            {
                return -1;
            }
          stepsPossible = maxreachable-i;
        }

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       cout<<solve(arr,n);
    }
  return 0;
}
