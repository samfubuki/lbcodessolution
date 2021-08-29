
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends


int minSwap(int *arr, int n, int k) {
    int good=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            good++;
        }

    }
    int mi=100000;
    int bad=0;
    for(int i=0;i<good;i++)
    {
        if(arr[i]>k)
        {
            bad++;
        }
    }
    int i=0,j=good-1;
    while(j<n)
    {
        mi=min(mi,bad);
        j++;
        if(j<n && arr[j]>k)
        {
            bad++;
        }
        if(arr[i]>k)
        {
            bad--;
        }
     i++;
    }
    return mi;
}
