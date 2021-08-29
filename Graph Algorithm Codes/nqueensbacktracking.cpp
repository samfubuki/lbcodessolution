#include<bits/stdc++.h>
using namespace std;
bool isSafe(int board[][10], int i, int j, int n)
{
    //You can check for the columns
    for(int row=0;row<i;row++)
    {
        if(board[row][j]==1)
        {
            return false;
        }
    }
    //check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y--;
    }
    //check for right diagonal
     x=i;
     y=j;
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    //The position is now safe for columns and diagonals
    return true;

}
bool solveNQueen(int board[][10], int i, int n)
{
    //Base Case
    if(i==n){
        //You have successfully placed queens in n rows (0....n-1);
        //Print the board
        cout<<"[";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                 cout<<(j+1)<<" ";
                }
                /*else
                {
                    cout<<"_";
                }
                */
            }
        }
        cout<<"]";
        cout<<" ";
        return false; //true
    }
    //Recursive Case
    //Try to place the queen in the current row and call on the remaining part which will be solved by recursion
    for(int j=0;j<n;j++)
    {
        //check whether position is safe for the queen or not
        if(isSafe(board,i,j,n)){
            //place the queen assuming i,j is in the right position
            board[i][j]=1;
        }
        else
        {
            continue;
        }
        bool nextqueen = solveNQueen(board,i+1,n);
        if(nextqueen)
        {
            return true;
        }
        //if cannot be place the nextqueen then this means i,j is not in the right position and our assumption is wrong
        board[i][j]=0; //Backtrack

    }
 //coming to the end means that we have tried all positions in the current row but could not place the queen

 return false;
}

int main()
{
    int n;
    cin>>n;
    if(n==2 || n==3)
    {
        cout<<"-1"<<endl;
    }
    int board[10][10] = {0};
    solveNQueen(board,0,n);

}
