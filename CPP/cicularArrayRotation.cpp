#include<iostream>
#include<vector>
using namespace std;
// #include<bits/stdc++.h>

vector<int> rotate( int n , vector<int>arr , int k , vector<int> q){

	for(int j=0;j<k%n;j++){
		int count=0;
		int temp = arr[n-1];
		for(int i=n-1;i>0;i--){
			arr[i] = arr[i-1]; 
		}
		arr[0] = temp;
	}
	
	vector<int> ans(q.size());
	for(int i=0;i<q.size();i++)
		ans[i] = arr[q[i]]; 
	return ans;
}	


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	int n , k , q;
	cin>>n>>k>>q;

	vector<int> arr;
	vector<int> queries;

	for( int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}

	for(int i=0;i<q;i++){
		int x;cin>>x;
		queries.push_back(x);
	}

	for(int  u : rotate(n,arr,k,queries))
		cout<<u<<" ";

return 0;
}