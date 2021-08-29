#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums)
    {
       int n =  nums.size();
       int res = 0;
       for(int i=0;i<n;i++)
       {
           res = res ^ nums[i];
       }
       //find the rightmost set bit
       int i=0;
       int temp = res;
       while(temp>0)
       {
           if(temp & 1)
           {
               break;
           }
        i++;
        temp = temp>>1;
       }
       int mask = (1<<i);
       int firstNo = 0;
       for(int i=0;i<n;i++)
       {
           if((mask&nums[i])!=0)
           {
               firstNo = firstNo ^ nums[i];
           }
       }
       int secondNo = res ^ firstNo;
       vector<int> v;
       v.push_back(firstNo);
       v.push_back(secondNo);
       sort(v.begin(),v.end());
       return v;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(2*n+2);
        for(int i=0;i<2*n+2;i++)
        {
            cin>>v[i];
        }
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for(vector <int> :: iterator it = v.begin(); it != v.end(); it++)
        {
            cout<<*it<<" ";
        }
      cout<<endl;
    }
  return 0;
}
