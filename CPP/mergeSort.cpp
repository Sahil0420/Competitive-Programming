#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void changeBit(int**arr, int n ){
	arr[n-1][n-1] = 2345273;
}



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	int n=4;
	int **arr = new int*[n];
	for(int i=0;i<n;i++){
		arr[i] = new int[n];
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<end;
	}

	changeBit(arr,n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<end;
	}

	

	return 0;
}