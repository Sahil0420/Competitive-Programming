#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;

int getIndex(vector<int> arr , int k){
	for(int i = 0 ; i<arr.size();i++){
		if(arr[i]==k)
			return i;
	}
	return -1;
}

void sequenceEquation(vector<int> arr){
	vector<int> ans;
	int n = arr.size();
	for(int i=1;i<=n;i++){
		int temp = getIndex(arr, i)+1;
		int y = getIndex(arr, temp)+1;
		ans.push_back(y);
	}

	for(auto i : ans)
		cout<<i<<" ";
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n;cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	// for(int i : sequenceEquation(arr))?/
	
	sequenceEquation(arr);

return 0;
}


/*
INPUT : 
5
4 3 5 1 2
OUTPUT : 
1 3 5 4 2
*/