#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool closingpair(char opening , char closing)
{
    if(opening=='(' && closing==')')
    {
        return true;
    }
    else if(opening=='{' && closing=='}')
    {
        return true;
    }
    else if(opening=='[' && closing==']')
    {
        return true;
    }
return false;

}
bool ispar(string x)
{
    stack<char> s;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]=='(' || x[i]=='{' || x[i]=='[')
        {
            s.push(x[i]);
        }
        else if(x[i]==')' || x[i]=='}' || x[i]==']')
        {
            if(s.empty() || !closingpair(s.top(),x[i]))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
 return s.empty()?true:false;
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
