// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



// The main function that returns value of a given postfix expression
int evaluatePostfix(string S)
{
   stack<int> s;
   for(int i=0;S[i]!='\0';i++)
   {
       if(isdigit(S[i]))
       {
           s.push(S[i]-'0');
       }
       else
       {
           int n1=s.top();
           s.pop();

           int n2=s.top();
           s.pop();

           if(S[i]=='+')
           {
               s.push(n1+n2);
           }
           else if(S[i]=='/')
           {
               s.push(n2/n1);
           }
           else if(S[i]=='*')
           {
               s.push(n1*n2);
           }
           else if(S[i]=='-')
           {
               s.push(n2-n1);
           }
       }
   }
  return s.top();
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;

    cout<<evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
