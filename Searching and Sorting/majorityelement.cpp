// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
  int cnt=0;
  int ele=0;
  for(int i=0;i<size;i++)
  {
      if(cnt==0)
      {
          ele=a[i];
      }
      if(ele==a[i])
      {
          cnt=cnt+1;
      }
      else
      {
          cnt=cnt-1;
      }
  }
  int c=0;
  for(int i=0;i<size;i++)
  {
    if(a[i]==ele)
    {
        c++;
    }
  }
 if(c>size/2)
 {
     return ele;
 }
 else
 {
     return -1;
 }

}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
