// C++ program for Dynamic
// Programming implementation of
// Min Sum Path in a Triangle
#include <bits/stdc++.h>
using namespace std;

//  function to find minimum sum for a path
int minSumPath(vector<vector<int> >& A)
{
	// For storing the result in a 1-D array,
	// and simultaneously updating the result.
	int memo[A.size()];
	int n = A.size() - 1;

	// For the bottom row
	for (int i = 0; i < A[n].size(); i++)
		memo[i] = A[n][i];

	// Calculation of the remaining rows,
	// in bottom up manner.
	for (int i = A.size() - 2; i >= 0; i--)
		for (int j = 0; j < A[i].size(); j++)
			memo[j] = A[i][j] + min(memo[j],
									memo[j + 1]);

	// return the top element
	return memo[0];
}

/* Driver program to test above functions */
int main()
{
	vector<vector<int> > A{ { 2 },
							{ 3, 9 },
							{ 1, 6, 7 } };
	cout << minSumPath(A);
	return 0;
}

//code fot minimum path sum in a triangle
