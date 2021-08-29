/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid
#define UNASSIGNED 0

// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9


 // } Driver Code Ends


class Solution {
  public:
    bool row_valid(int row, int col , int grid[N][N], int k)
    {
      for(int i=0;i<9;i++)
      {
          if(grid[row][i]==k)
          {
              return false;
          }
      }

    }
    bool col_valid(int row, int col, int grid[N][N], int k)
    {
        for(int i=0;i<9;i++)
        {
            if(grid[i][col]==k)
            {
                return false;
            }
        }
     return true;
    }
    bool submatrix_valid(int row, int col, int grid[N][N], int k)
    {
        int row_start, col_start , row_end , col_end , i,j;
        for(i=0;i<9;i+=3)
        {
          if(row>=i && row<i+3)
          {
            row_start=i;
            row_end=i+3;
          }
          if(col>=i && col<i+3)
          {
              col_start=i;
              col_end=i+3;
          }
        }
        for(i=row_start;i<row_end;i++)
        {
            for(j=col_start;j<col_end;j++)
            {
                if(grid[i][j]==k)
                {
                    return false;
                }
            }
        }
    return true;
    }
    bool valid(int row , int col , int grid[N][N], int k)
    {
        if(row_valid(row,col,grid,k) && col_valid(row,col,grid,k) && submatrix_valid(row,col,grid,k))
        {
            return true;
        }
     return false;
    }
    bool sudoku(int i, int j, int grid[N][N])
    {
        if(i==N)
        {
            return true;
        }
        if(grid[i][j]!=0)
        {
            if(j==8)
            {
                return sudoku(i+1,0,grid);
            }
            else
            {
                return sudoku(i,j+1,grid);
            }
        }
        for(int k=1;k<=9;k++)
        {
            if(valid(i,j,grid,k))
            {
                grid[i][j]=k;
                if(j==8)
                {
                    if(sudoku(i+1,0,grid))
                    {
                        return true;
                    }
                }
                else
                {
                    if(sudoku(i,j+1,grid))
                    {
                        return true;
                    }
                }
             grid[i][j]=0;
            }
        }
     return false;
    }
    bool SolveSudoku(int grid[N][N])
    {
        return sudoku(0,0,grid);
    }

    void printGrid (int grid[N][N])
    {
      int i,j;
      for(int i=0;i<9;i++)
      {
          for(int j=0;j<9;j++)
          {
              cout<<grid[i][j]<<" ";
          }
        cout<<endl;
      }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];

		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];

		Solution ob;

		if (ob.SolveSudoku(grid) == true)
            ob.printGrid(grid);
        else
            cout << "No solution exists";

        cout<<endl;
	}

	return 0;
}  // } Driver Code Ends
