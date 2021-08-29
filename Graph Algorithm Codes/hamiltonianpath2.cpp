#include <iostream>
using namespace std;
int result;
bool visit[16];
void backtrack(int board[][16],int i,int v,int count){

visit[i]=true;

for(int j=1;j<=v;j++){
if(visit[j]==false && board[i][j]==1)
backtrack(board,j,v,count+1);
}

if(count==v-1)
result=1;

visit[i]=false;
return;
}
int main() {

int t; cin>>t;
while(t-->0){
int v,e; cin>>v>>e;

int board[16][16];

for(int i=0;i<16;i++)
for(int j=0;j<16;j++)
board[i][j]=0;

int u,w;
for(int i=0;i<e;i++){
cin>>u>>w;
board[u][w]=1;
board[w][u]=1;
}

for(int i=0;i<16;i++)
visit[i]=false;

result=0;
for(int m=1;m<=v;m++)
backtrack(board,m,v,0);

if(result==1)
{
cout<<"1"<<endl;
}
else
{
    cout<<"0"<<endl;
}
}
return 0;
}
