#include<bits/stdc++.h>
using namespace std;
int main()
{
    char alpha;
    cin>>alpha;
    if((alpha>=65 && alpha<=90) || (alpha>=90 && alpha<=122))
    {
        cout<<alpha<<" is an alphabet:";
    }
    else
    {
        cout<<alpha<<" is not an alphabet:";
    }
  return 0;
}
