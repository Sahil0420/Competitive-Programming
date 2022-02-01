#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n;cin>>n;
	int arr[n] ={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	int maxi=arr[0];
	for (int i = 1; i < n; ++i)
	{
		maxi = max(maxi,arr[i]);
	}

	for(int floor = maxi;floor>=1;floor--){
		for (int i = 0; i < n; i++)
		{
			if(arr[i]>=floor){
				cout<<"*\t";
			}else{
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
	return 0;
}
