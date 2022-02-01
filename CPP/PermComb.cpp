#include<vector>
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void permuteHelper(vector<vector<int>> &ans, vector<int> num , int index){
	if(index >= num.size()){
		ans.push_back(num);
		return;
	}
	for( int j=index;j<num.size();j++){
		swap(num[j] , num[index]);
		permuteHelper(ans , num , index+1);
		//backtrack
		swap(num[j] , num[index]);
	}	
}

vector<vector<int>> permute(vector<int>&num){
	vector<vector<int>> ans;
	int index=0;
	permuteHelper(ans,num,index);

	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	vector<int> num;
	int n=0;cin>>n;
	for(int i=0;i<n;i++){
		int a ;cin>>a;
		num.push_back(a);
	}

	for(auto u : num) cout<<u<<" ";
	cout<<"\n";

	cout<<"Permutations : \n";
	for(auto u : permute(num)){
		for(auto i : u)
			cout<<i<<" ";
		cout<<"\n";
	}
	// for(auto u : permute())
	for(int i=0;i<=100;i++){
		if (not(i&1)) cout<<i<<"  ";
	}
	return 0;
}
