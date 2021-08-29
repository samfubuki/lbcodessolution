#include<bits/stdc++.h>
using namespace std;

#define V 6		//No of vertices

int selectMinVertex(vector<int>& value,vector<bool>& setMST)
{
	int minimum = INT_MAX;
	int vertex;
	for(int i=0;i<V;++i)
	{
		if(setMST[i]==false && value[i]<minimum)
		{
			vertex = i;
			minimum = value[i];
		}
	}
	return vertex;
}
int printmst(int parent[], int n, int graph[V][V])
{
     int minProduct = 1;
     for(int i=1;i<V;++i)
     {
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[i][parent[i]]<<"\n";
		 minProduct *= graph[i][parent[i]];
     }
   cout<<"Minimum Obtainable Product is : "<<minProduct<<endl;
}
void primmst(int graph[V][V], double loggraph[V][V])
{
	int parent[V];		//Stores MST
	vector<int> value(V,INT_MAX);	//Used for edge relaxation
	vector<bool> setMST(V,false);	//TRUE->Vertex is included in MST

	//Assuming start point as Node-0
	parent[0] = -1;	//Start node has no parent
	value[0] = 0;	//start node has value=0 to get picked 1st

	//Form MST with (V-1) edges
	for(int i=0;i<V-1;++i)
	{
		//Select best Vertex by applying greedy method
		int U = selectMinVertex(value,setMST);
		setMST[U] = true;	//Include new Vertex in MST

		//Relax adjacent vertices (not yet included in MST)
		for(int j=0;j<V;++j)
		{
			/* 3 constraints to relax:-
			      1.Edge is present from U to j.
			      2.Vertex j is not included in MST
			      3.Edge weight is smaller than current edge weight
			*/
			if(loggraph[U][j]!=0 && setMST[j]==false && loggraph[U][j]<value[j])
			{
				value[j] = loggraph[U][j];
				parent[j] = U;
			}
		}
	}
	//Print MST
	printmst(parent, V, graph);
}
//get minimum product spanning tree
void minimumProductMST(int graph[V][V])
{
    double loggraph[V][V];

    // Constructing logGraph from original graph
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] > 0)
                loggraph[i][j] = log(graph[i][j]);
            else
                loggraph[i][j] = 0;
        }
    }

    // Applyting standard Prim's MST algorithm on
    // Log graph.
    primmst(graph, loggraph);
}
int main()
{
	int graph[V][V] = {
        { 0, 2, 0, 6, 0 },
        { 2, 0, 3, 8, 5 },
        { 0, 3, 0, 0, 7 },
        { 6, 8, 0, 0, 9 },
        { 0, 5, 7, 9, 0 },
    };

	minimumProductMST(graph);
	return 0;
}
