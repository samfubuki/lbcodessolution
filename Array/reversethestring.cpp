// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;

	cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){

  int n = str.length();
  string s2="";
  for(int i=n-1;i>=0;i--)
  {
    s2=s2+str[i];
  }
 return s2;
}
