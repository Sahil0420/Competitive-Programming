#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here

	int n = 10;
	int arr[n] = {-1};
	for(int i=0;i<n;i++) arr[i] =i+1;

	// cout<<"ENTER A position to delete element";
	int position;cin>>position;

	for(int i = 0;i<n;i++)
		cout<<arr[i]<<" ";

	for(int i=0;i<n-1;i++){
		if(i>=position)
			arr[i] = arr[i+1];
	}
	arr[n-1] = -1;
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
return 0;
}