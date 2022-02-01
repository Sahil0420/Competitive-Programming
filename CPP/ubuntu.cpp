#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> getSubsets(vector<int> arr){
	int size = arr.size();
	int subsetNum = 1<<size;

	vector<vector<int>> allsubset;
	for(int subsetMask=0;subsetMask<subsetNum;++subsetMask){
		vector<int> subset;
		for(int i=0;i<size;i++){
			if (subsetMask & (1<<i)){
				subset.push_back(arr[i]);
			}
		}
		allsubset.push_back(subset);
	}
	return allsubset;
}

int main(int argc, char const *argv[])
{	
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n ;cin>>n;
	vector<int> vec;
	for (int i = 0; i < n; ++i)
	{
		int a;cin>>a;
		vec.push_back(a);
	}
	vector<vector<int>> ans = getSubsets(vec);
	
	for(auto a : ans){
		for(auto i : a ){
			cout<<i<<" ";
		}
		cout<<"\n";
	}

	return 0;
}