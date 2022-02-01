#include<iostream>
#include"vector"
#include<unordered_map>
#include<list>
#include<queue>
//#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
public:
	unordered_map<T, list<T>> adj;

	void addEdge(T u , T v , bool direction){
		// direction = 0 --> undirected
		// direction = 1 --> directed

		// create an edge from u to v 
		adj[u].push_back(v);

		if(direction==0){
			adj[v].push_back(u);
		}
	}

	void printAdjList(){
		for(auto i : adj){
			cout<<i.first<<" --> ";
			for(auto j : i.second){
				cout<<"| "<<j<<" ";
			}
			cout<<"|\n";
		}
	}

	void bfs(unordered_map<int,bool> &visited , vector<int> &ans ,int node ){
		queue<int> q;
		q.push(node);
		visited[node] = 1;

		while(!q.empty()){
			int frontNode = q.front();
			q.pop();

			//store frontNode into the list
			ans.push_back(frontNode);

			// traverse all neighbors of frontNode
			for(auto i :adj[frontNode]){
				if(!visited[i]){
					q.push(i);
					visited[i]=true;
				}
			}

		}
	}

	vector<int> BFS(int vertex){
		// breadth first search or traversal
		vector<int> ans ; //for storing the answer for BFS
		unordered_map<int , bool> visited; 

		// traverse all componenets of a graph
		for(int i=0;i<vertex;i++){
			if(!visited[i]){
				bfs( visited , ans, i);
			}
		}
		return ans;
	}

	void dfs( unordered_map<int , bool>& visited , int node,  vector<int>&component){
		component.push_back(node);
		visited[node] = true;
		// har ek connected node ke liye recursive call marro;
		for(auto i : adj[node]){
			if (not(visited[i])){
				dfs( visited ,  i , component);
			}
		}
	}

	vector<vector<int>> DFS(int vertex ){
		// depth first traversal
		vector<vector<int>> ans;
		unordered_map<int , bool> visited;

		for(int i = 0 ; i<vertex ; i++){
			if(!visited[i]){
				vector<int> component;
				dfs(visited  , i , component);
				ans.push_back(component);
			}
		}
		return ans;
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
		int u,v;
		cin>>u>>v;
		// creating undirected graph
		g.addEdge(u,v,0);
	}

	cout<<"Printing Graph : \n";

	g.printAdjList();


	cout<<"\n";
	cout<<"BFS Traversal : ";
	vector<int> bfsans = g.BFS(nodes);

	for(auto i : bfsans)
		cout<<i<<" ";
	cout<<endl;

	vector<vector<int>> dfsans = g.DFS(nodes);

	for(auto i : dfsans){
		for(auto j : i){
			cout<<j<<" ";
		}
	}

	return 0;
}



/*
inputs 

5
6
0 1
1 2
2 3
3 1
3 4
0 4

input for BFS 


*/