#include<bits/stdc++.h>
using namespace std;
#define pairladder pair <int, int>
#include <unordered_map>
int bfs(unordered_map <int,int> A){

    queue< pairladder > bfs;
    vector<bool > visited(30,false);
    bfs.push(make_pair(0,0));
    while(!bfs.empty()){
        pairladder temp = bfs.front();
        bfs.pop();
        visited[temp.first] = true;
        if(temp.first == 29 ) return temp.second;
        int step = temp.second;
        bfs.push( make_pair(A[temp.first+1], step+1));
        bfs.push(make_pair(A[temp.first+2], step+1));
        bfs.push(make_pair(A[temp.first+3], step+1));
        bfs.push(make_pair(A[temp.first+4], step+1));
        bfs.push(make_pair(A[temp.first+5], step+1));
        bfs.push(make_pair(A[temp.first+6], step+1));

    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int N ;
	    cin >> N ;
	    unordered_map <int, int > A;
	    for(int i=0; i<40; i++){
	        A[i] = i;
	    }
	    for(int i=0; i < N ; i++){
	        int u, v;
	        cin >> u >> v;
	        u--, v--;
	        A[u] = v ;
	    }
	    cout << bfs(A) << endl;
	}
	return 0;
}
