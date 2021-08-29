#include<bits/stdc++.h>
using namespace std;
int minval(int x, int y, int z)
{
	return min(min(x, y), z);
}
int editdistdp(string str1 , string str2 , int m, int n)
{
    int dp[m+1][n+1];
    for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			// If first string is empty, only option is to
			// insert all characters of second string
			if (i == 0)
				dp[i][j] = j; // Min. operations = j

			// If second string is empty, only option is to
			// remove all characters of second string
			else if (j == 0)
				dp[i][j] = i; // Min. operations = i

			// If last characters are same, ignore last char
			// and recur for remaining string
			else if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			// If the last character is different, consider all
			// possibilities and find the minimum
			else
				dp[i][j] = 1 + minval(dp[i][j - 1], // Insert
								dp[i - 1][j], // Remove
								dp[i - 1][j - 1]); // Replace
		}
	}

	return dp[m][n];
}
int main()
{
    string str1 = "sunday";
    string str2 = "saturday";
    cout<<editdistdp(str1 , str2 , str1.length(), str2.length());
    return 0 ;
}