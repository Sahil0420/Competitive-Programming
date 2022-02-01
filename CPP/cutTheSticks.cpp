#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int getSmallest(vector<int> arr , int n ){
	int m=arr[0];
	for(int i=0;i<n;i++)
		m = min(m , arr[i]);
	return m;
}

void rem(vector<int>&a){
	for(int i=0;i<a.size();i++){
		if(a[i]==0)
			a.erase(a.begin()+i);
	}
}	

vector<int> solution(vector<int> &arr , int n ){
	vector<int> ans;
	while(arr.size()>0){
		int m = getSmallest(arr, n);
		for(int i=0;i<n;i++){
			arr[i] = arr[i]-m;
		}
		ans.push_back(arr.size());
		rem(arr);
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	int n;cin>>n;
	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	vector<int> ans = solution(arr ,n);

	

return 0;
}