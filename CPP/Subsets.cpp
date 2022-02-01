#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getSubsets(vector<int> num){
	int size = num.size(); 
	int subsetNum = (1<<size);
	vector<vector<int>> allSubset;
	for(int subsetMask = 0;subsetMask<subsetNum;++subsetMask){
		vector<int> subset; 
		for(int i=0;i<size;i++){
			if((subsetMask & (1<<i)) !=0 ){
				subset.push_back(num[i]);
			}
		}
		allSubset.push_back(subset);
	}
	return allSubset;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector<int> num;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int el;cin>>el;
		num.push_back(el);
	}
	vector<vector<int>> res = getSubsets(num);
	
	for(auto i : res){
		for(auto j : i)
			cout<<j<<" ";
		cout<<endl;
	}

	return 0;
}	