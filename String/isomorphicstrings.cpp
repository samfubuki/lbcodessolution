
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }

    return 0;
}// } Driver Code Ends


// This function returns true if str1 and str2 are ismorphic
// else returns false
bool areIsomorphic(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    if(n!=m)
    {
        return false;
    }
    int m1[256]={0};
    int m2[256]={0};
    for(int i=0;i<n;i++)
    {
        if(!m1[str1[i]] && !m2[str2[i]])
        {
            m1[str1[i]]=str2[i];
            m2[str2[i]]=str1[i];
        }
        else if(m1[str1[i]]!=str2[i])
        {
            return false;
        }
    }
 return true;


}
