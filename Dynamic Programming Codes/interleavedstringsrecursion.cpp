#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
bool isInterleave(string A, string B, string C)
{
    if(A.empty() && B.empty() && C.empty())
    {
        return true;
    }
    if(C.empty())
    {
        return false;
    }
    bool first = (!A.empty() && A[0]==C[0]) && isInterleave(A.substr(1),B,C.substr(1));
    bool second = (!B.empty() && B[0]==C[0]) && isInterleave(A,B.substr(1),C.substr(1));
    return (first || second);
}
