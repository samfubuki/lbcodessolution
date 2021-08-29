#include<bits/stdc++.h>
using namespace std;
int countbitsfast(int n)
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n = n & (n-1);
    }
 return cnt;
}
int countBitsFlip(int a, int b){

int c = a^b;
countbitsfast(c);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<countBitsFlip(a,b)<<endl;
    }
 return 0;
}
