#include <bits/stdc++.h>

using namespace std;

/*class Graph{
private:
	vector<pair<string,string>> routes;
public:
	unordered_map<string,vector<string>> graph_map;
	Graph(vector<pair<string,string>> arr){
		this->routes = arr;
	}
	for(int i=0;i<this->routes.size();i++){
		
	}
};*/


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);	
	 freopen("output.txt","w",stdout);	
	#endif

	cout<<"Enter the number of routes : ";
	int n;cin>>n;
	cout<<n<<"\n";

	vector<pair<string,string>> routes;
	for (int i=0;i<n;i++){
		pair<string,string> route ;
		string start,end;
		cin>>start>>end;

		route.first = start;
		route.second = end;

		routes.push_back(route);
	}

	// vector<pair<string,string>> :: iter;

	for (int i=0;i<n;i++){
		cout<<i+1<<".  "<<routes[i].first<<" to "<<routes[i].second<<"\n";
	}

	return 0;
}

/*
5
Mumbai Paris
Mumbai Dubai
Paris  LA
Dubai  LA
Duabi  Paris
*/