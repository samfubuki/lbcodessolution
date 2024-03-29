// Program to find the maximum profit job sequence from a given array
// of jobs with deadlines and profits
#include<bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct Job
{
    int id;	 // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
};


 // } Driver Code Ends


// Prints minimum number of platforms reqquired
bool cmp(Job arr1, Job arr2)
{
    return arr1.profit>arr2.profit;
}
pair<int,int> JobScheduling(Job arr[], int n)
{
    sort(arr,arr+n,cmp);
    bool jobsdone[n]={0};
    int result=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j = min(n,arr[i].dead-1);j>=0;j--)
        {
            if(jobsdone[j]==false)
            {
                cnt=cnt+1;
                result=result+arr[i].profit;
                jobsdone[j]=true;
                break;
            }
        }
    }
return make_pair(cnt,result);

}



// { Driver Code Starts.
// Driver program to test methods
int main()
{
    int t;
    //testcases
    cin >> t;

    while(t--){
        int n;

        //size of array
        cin >> n;
        Job arr[n];

        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        //function call
        pair<int,int> ans = JobScheduling(arr, n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
	return 0;
}


  // } Driver Code Ends
