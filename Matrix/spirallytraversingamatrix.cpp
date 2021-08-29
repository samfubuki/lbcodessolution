// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
     int top=0;
     int down = r-1;
     int left=0;
     int right = c-1;
     int dir=0;
     vector<int> ans;
     while(top<=down && left<=right)
     {
         if(dir==0)
         {
           for(int i=left;i<=right;i++)
           {
               ans.push_back(matrix[top][i]);
           }
          top=top+1;
         }
         else if(dir==1)
         {
             for(int i=top;i<=down;i++)
             {
                 ans.push_back(matrix[i][right]);
             }
        right=right-1;
         }
         else if(dir==2)
         {
             for(int i=right;i>=left;i--)
             {
                 ans.push_back(matrix[down][i]);
             }
          down=down-1;
         }
         else if(dir==3)
         {
             for(int i=down;i>=top;i--)
             {
                 ans.push_back(matrix[i][left]);
             }
          left=left+1;
         }
         dir = (dir+1)%4;
     }
     return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
