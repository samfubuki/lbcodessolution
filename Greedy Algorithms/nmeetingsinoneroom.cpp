#include <bits/stdc++.h>

using namespace std;

void maxMeetings(int *, int *, int);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        maxMeetings(start, end, n);
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


void maxMeetings(int start[], int end[], int n) {
    pair<int,pair<int,int> > p[n];
    for(int i=0;i<n;i++)
    {
        p[i] = make_pair(end[i],make_pair(i+1,start[i]));
    }
    sort(p,p+n);
    vector<int> ans;
    ans.push_back(p[0].second.first);
    int s = p[0].first;
    for(int i=1;i<n;i++)
    {
        if(p[i].second.second>s)
        {
            ans.push_back(p[i].second.first);
            s=p[i].first;
            continue;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
