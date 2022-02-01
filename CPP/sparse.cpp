#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void sparseMat(){
	int n;cin>>n;
	int arr[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j])
				cout<<arr[i][j]<<" ";
		}
		cout<<'\n';
	}
}

void lowerLeftPart(){
	int n;cin>>n;
	int arr[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	cout<<'\n';
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++)
	// 		cout<<arr[i][j]<<" ";
	// 	cout<<'\n';
	// }
	// cout<<'\n';

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j])
				cout<<arr[i][j]<<" ";
			else
				cout<<"  ";
		}
		cout<<'\n';
	}
}

void threeDiagonal(){
	int n;cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j])
				cout<<arr[i][j]<<" ";
			else
				cout<<"  ";
		}
		cout<<'\n';
	}

}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	sparseMat();

	lowerLeftPart();

	threeDiagonal();

	return 0;
}