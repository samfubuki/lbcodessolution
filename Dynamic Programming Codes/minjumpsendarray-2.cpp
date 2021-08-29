#include<bits/stdc++.h>
using namespace std;
int solve(int i, int arr[], int n)
{
    if(i>=n)
    {
        return INT_MAX;
    }
    if(i==n-1)
    {
        return 0;
    }

    int steps = arr[i];
    int minvalue = INT_MAX;
    for(int j=1;j<=steps;j++)
    {
        minvalue = min(minvalue,solve(i+j,arr,n));

    }
    return minvalue+1;

}
int main()
{
    int n=11;
    int arr[100] = {1,3,5,8,9,2,6,7,6,8,9}
}
