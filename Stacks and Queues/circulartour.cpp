// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump [],int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}
// } Driver Code Ends


/*
The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
   int surplus=0,deficit=0,start=0;
   for(int i=0;i<n;i++)
   {
       surplus=surplus+p[i].petrol-p[i].distance;
       if(surplus<0)
       {
           start=i+1;
           deficit=deficit+surplus;
           surplus=0;
       }
   }
  return surplus+deficit>0?start:-1;
}
