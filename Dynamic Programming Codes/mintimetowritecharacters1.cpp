// C++ program to write characters in
// minimum time by inserting, removing
// and copying operation
#include <bits/stdc++.h>
using namespace std;

// method returns minimum time to write
// 'N' characters
int minTimeForWritingChars(int N, int insert,
					int remove, int copy)
{
	if (N == 0)
	return 0;
	if (N == 1)
	return insert;

	// declare dp array and initialize with zero
	int dp[N + 1];
	memset(dp, 0, sizeof(dp));

	// loop for 'N' number of times
	for (int i = 1; i <= N; i++)
	{
		/* if current char count is even then
			choose minimum from result for (i-1)
			chars and time for insertion and
			result for half of chars and time
			for copy */
		if (i % 2 == 0)
			dp[i] = min(dp[i-1] + insert,
						dp[i/2] + copy);

		/* if current char count is odd then
			choose minimum from
			result for (i-1) chars and time for
			insertion and
			result for half of chars and time for
			copy and one extra character deletion*/
		else
			dp[i] = min(dp[i-1] + insert,
						dp[(i+1)/2] + copy + remove);
	}
	return dp[N];
}

// Driver code to test above methods
int main()
{
	int N = 9;
	int insert = 1, remove = 2, copy = 1;
	cout << minTimeForWritingChars(N, insert,
								remove, copy);
	return 0;
}

