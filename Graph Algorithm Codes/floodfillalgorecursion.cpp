#include <iostream>
using namespace std;
int screen[101][101];
void floodfillutil( int m, int n, int x, int y, int prevC, int newC)
{
     if (x < 0 || x >= m || y < 0 || y >= n)
        return;
    if (screen[x][y] != prevC)
        return;
    if (screen[x][y] == newC)
        return;


    screen[x][y] = newC;


    floodfillutil(m,n, x+1, y, prevC, newC);
    floodfillutil(m,n, x-1, y, prevC, newC);
    floodfillutil(m,n, x, y+1, prevC, newC);
    floodfillutil(m,n, x, y-1, prevC, newC);
}
void floodfill(int m, int n, int x, int y, int newC)
{
     int prevC = screen[x][y];
     floodfillutil( m, n,x,y, prevC, newC);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,x,y,k;
	    cin>>m>>n;
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>screen[i][j];
	        }
	    }
	    cin>>x>>y>>k;
	    floodfill(m,n,x,y,k);
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<screen[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
