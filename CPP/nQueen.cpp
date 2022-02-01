#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool isSafe(int **arr , int row , int col , int n ){
	for(int x=row;x>=0;x--){
		if(arr[x][col])
			return false;
	}

	for(int y=col;y>=0;y--){
		if(arr[row][y]==1)
			return false;
	}

	int x=row,y=col;
	while(x>=0 and y>=0){
		if(arr[x][y])
			return false;
		x--;
		y--;
	}	

	x=row;
	y=col;

	while(x>=0 and y<n){
		if(arr[x][y])
			return false;
		x--;
		y++;
	}	

	return true;
}

bool solveQueen(int **arr , int x , int n){
	if (x>=n)
		return true;
	for(int col=0;col<n;col++){
		if(isSafe(arr,x,col,n)){
			arr[x][col]=1;
			if(solveQueen(arr,x+1,n)){
				return true;
			}

			arr[x][col] = 0;
		}
	}
	return false;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	int n ;cin>>n;

	int **board = new int *[n];

	for(int i = 0  ; i< n ;i++){
		board[i] = new int[n];
		for(int j=0;j<n;j++){
			board[i][j] = 0;
		}
	}

	if(solveQueen(board , 0 , n))
	{
		for(int i = 0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<"\n";
		}
	}	

return 0;
}