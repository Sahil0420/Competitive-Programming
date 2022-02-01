#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int solve(int n , int k , vector<int>arr){
	int count=0;
	int start =0;
	do{
		start = (start+k)%n;
		count+=(arr[start]==0) ? 1 : 3;
	}while(start!=0);

	return (100 - count);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		// freopen("output.txt" , "w" , stdout);
	#endif


	//code goes here
		int n=0;cin>>n;
		int k=0;cin>>k;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];

		// for(auto i : arr) cout<<i<<" ";		
		cout<<solve(n,k,arr);


return 0;
}