// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

const int no_of_chars = 256;

string findSubString(string str);

// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;

        cout << findSubString(str).size() << endl;
    }
    return 0;
}
// } Driver Code Ends




string findSubString(string str)
{
   unordered_map<char,int> mp;
   string ans;
   for(int i=0;i<str.size();i++)
   {
       mp[str[i]]=0;
   }
   int dist = mp.size();
   int cnt = 0;
   int start=0;
   int minele = INT_MAX;
   for(int i=0;i<str.size();i++)
   {
       if(mp[str[i]]==0)
       {
           cnt++;
       }
       mp[str[i]]++;
       while(cnt==dist)//all distinct are there, shrinking it from left
       {
           if(minele>i-start)
           {
               ans = str.substr(start,i-start+1);
               minele = i-start;
           }
          mp[str[start]]--;
          if(mp[str[start]]==0)
          {
              cnt--;
          }
          start++;
       }
   }
   return ans;
}
