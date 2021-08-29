#include<bits/stdc++.h>
using namespace std;
int mem[100];

int solve(int i, int arr[], int n)
{
    if(mem[i]>0)
    {
        return mem[i];
    }
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
    mem[i] = minvalue+1;
    return mem[i];

}
int main()
{
    int n=11;
    int arr[100] = {1,3,5,8,9,2,6,7,6,8,9}
}
