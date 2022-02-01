#include<iostream>
#include<map>
#include<unordered_map>
//#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	string a;
	cin>>a;

	//created a map 
	unordered_map<char,int> m ;

	for(auto i : a){
		m.insert(make_pair(i,0));
		m[i]++;
	}

	cout<<"Frequency of characters : "<<"\n";
	for (auto u : m){
		cout<<u.first<<" = "<<u.second<<"\n";
	}
	return 0;
}
