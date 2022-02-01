#include<iostream>
#include"vector"
#include<unordered_map>
#include<list>

//#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
public:
	unordered_map<T, list<pair<int,T>>> adj;

	void addEdge(T u , T v , int weight , bool direction){
		// direction = 0 --> undirected
		// direction = 1 --> directed

		// create an edge from u to v 
		adj[u].push_back(make_pair(weight , v));
		if(direction==0){
			adj[v].push_back(make_pair(weight , u));
		}
	}

	void printAdjList(){
		for(auto i : adj){
			cout<<i.first<<" --> ";
			for(auto j : i.second){
				cout<<" ( "<<j.first<<"--"<<j.second<<" ) ";
			}
			cout<<"\n";
		}
	}

};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		
	cout<<"Implementing graphs in cpp\n";	
	cout<<"Enter the number of nodes : ";
	int nodes;cin>>nodes;cout<<nodes<<"\n";

	cout<<"enter the number of edges : ";
	int edges;cin>>edges;cout<<edges<<"\n";

	Graph<int> g;
	for (int i=0;i<edges;i++){
		int u,v,w;
		cin>>u>>v>>w;
		// creating undirected graph
		g.addEdge(u,v,w,0);
	}

	cout<<"Printing Graph : \n";

	g.printAdjList();

	return 0;
}


/*
inputs 

5
6
0 1 2
1 2 3
2 3 4
3 1 6
3 4 2
0 4 5

*/