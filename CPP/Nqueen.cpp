#include<bits/stdc++.h>
using namespace std;

bool isSafe(int **arr , int x , int y , int n ){
	for(int row=0;row<n;row++){
		if(arr[row][y])
			return false;
	}

	int row=x , col=y;

	while(row>=0 && col>=0){
		if(arr[row][col])
			return false;
		row--;col--;
	}

	row=x;col=y;
	while(row>=0 && col<n){
		if(arr[row][col])
			return false;
		row--;col++;
	}

	return true;
}
bool solveQueen(int **arr , int x ,int n ){
	if(x>=n)
		return true;

	for(int col=0;col<n;col++){
		if(isSafe(arr,x,col,n)){

			arr[x][col]=1;

			if(solveQueen(arr,x+1,n))
				return true;

			arr[x][col]=0;
		}
	}
	return false;
}

void printArray(int **arr, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1)
				cout<<" Q ";
			else
				cout<<" . ";
		}
		cout<<endl;
	}
}

int main(int argc, char const *argv[])
{

	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output.txt","w",stdout);
	 #endif

	int n;cin>>n;
	int **arr = new int*[n];
	for(int i=0;i<n;i++){
		arr[i]= new int[n];
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}

	// printArray(arr,n);
	cout<<"\n SOLUTION"<<endl;
	if (solveQueen(arr,0,n))
	{
		printArray(arr,n);
	}
	else{
		cout<<"\nNO SOLUTION";
	}
	return 0;
}