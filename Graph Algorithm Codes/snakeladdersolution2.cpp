#include <bits/stdc++.h>
using namespace std;

int minThrows(map<int,int>mp,bool vis[31]){
    queue< pair <int,int> >q;
    q.push({1,0});   //enqueuing current cell and dice thrown count
    vis[1]=true;     //marking starting cell 1 as visited
    int count;
    while(!q.empty()){
        pair<int,int>temp=q.front();
        q.pop();
        int cell=temp.first;   //current cell
        int dice=temp.second;  //current count
        count=dice;            //updating count

        if(cell==30)  //if reached at last cell break;
        break;
        for(int i=1;i<=6;i++){  //checking for every possible throw
            if(!vis[cell+i]){
                vis[cell+i]=true;
                if(mp.find(cell+i)!=mp.end()){
                    q.push({mp[cell+i],dice+1});
                    vis[mp[cell+i]]=true;
                }
                else{
                    q.push({cell+i,dice+1});
                    vis[cell+i]=true;
                }
            }
        }
    }
    return count;
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int x,y;
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>x>>y;
	        mp.insert({x,y});
	    }
	    bool vis[31];  //visited array
	    memset(vis,false,sizeof(vis));
	    cout<<minThrows(mp,vis)<<endl;
	}
	return 0;
}
