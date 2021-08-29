#include<bits/stdc++.h>
using namespace std;
//User function template for C++

class Solution{
public:
    int median(vector<vector<int> > &matrix, int r, int c){
     int minval = matrix[0][0];
     int maxval = matrix[0][0];
     for(int i=0;i<r;i++)
     {
         if(matrix[i][0]<minval)
         {
             minval = matrix[i][0];
         }
         if(matrix[i][c-1]>maxval)
         {
             maxval = matrix[i][c-1];
         }

     }
     int desired_elements = (1+r*c)/2;
     while(minval<maxval)
     {
         int mid = (minval+maxval)/2;
         int cnt=0;
         for(int i=0;i<r;i++)
         {
             cnt = cnt + upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();

         }
         if(cnt<desired_elements)
         {
             minval = mid+1;
         }
         else
         {
             maxval = mid;
         }
     }
    return minval;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int> > matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;
    }
    return 0;
}  // { Driver Code Starts
//Initial template for C++

