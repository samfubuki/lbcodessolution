#include <bits/stdc++.h>
using namespace std;
void printSubStr(string str, int low, int high)
{
    for (int i = low; i <= high; ++i)
        cout << str[i];
}
int longestpalindromesubstr(string str)
{
    int n = str.length();
    bool table[n][n];
    memset(table,0,sizeof(table));
    int maxlength=1;
    for(int i=0;i<n;i++)
    {
        table[i][i]=true;//the marking for substring palindrome of length 1
    }
    int start=0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])//doing this for palindrome substring of length 2
        {
            table[i][i+1]=true;
            start=i;
            maxlength=2;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)//start index
        {
            int j = i+k-1;//end index
            if(table[i+1][j-1] && str[i]==str[j])
            {
                table[i][j]=true;
                if(k>maxlength)
                {
                    start=i;
                    maxlength=k;
                }
            }

        }
    }
 printSubStr(str, start, start + maxlength - 1);
 return maxlength;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    longestpalindromesubstr(str);
	    cout<<endl;
	}
	return 0;
}
