#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col ,vector<vector<int>> &board , int val , int n  ){
	for(int i=0;i<n;i++){

		//row check
		if(board[row][i]==val){
			return false;
		}

		//col check 
		if(board[i][col] == val){
			return false;
		}

		// 3x3 matrix check
		if(board[3*(row/3) + i/3][3*(col/3)+i%3] == val){
			return false;
		}
	}
	return true;
}

bool solveSudoku(vector<vector<int>> &board){
	int n = board[0].size();

	for(int row=0;row < n ; row++){
		for(int col = 0 ; col < n ; col++){
			//cell empty
			if (board[row][col]==0){
				for(int val=1;val<=9;val++){
					if(isSafe(row, col , board , val , n)){
						board[row][col] = val;
						bool aageSolutionPossibleHai = solveSudoku(board);
						if(aageSolutionPossibleHai)
							return true;
						else
						board[row][col]=0;//backtracking 
					}
				}
				return false;
			}
		}
	}
	return true;
}

void sudoku(vector<vector<int>> &board){
	solveSudoku(board);
}


void printSudoku(vector<vector<int>> arr ){
	int n=arr[0].size();
	int rowc = 0;
	for(int row=0;row<n;row++){
		rowc++;
		if (rowc>3){
			cout<<"\n";
			rowc=1;
		}
		int colc=0;
		for(int col=0;col<n;col++){
			colc++;
			if (colc>3){
				cout<<"\t";
				colc=1;
			}
			if(arr[row][col])
				cout<<arr[row][col]<<" ";
			else
				cout<<"* ";
		}
		cout<<endl;
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	vector<vector<int>> board;
	int n = 9;

	for(int i = 0;i<n;i++){
		vector<int> t;
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			t.push_back(k);
		}
		board.push_back(t);
	}

	printSudoku(board);

	cout<<"\n::::::::::::::::::::::::::::\tSOLUTION\t:::::::::::::::::::::::::::::::::\n\n";

	sudoku(board);
	printSudoku(board);


	return 0;
}


/*

easy 
0 0 4 0 5 9 0 0 0
9 0 0 7 3 4 6 0 0
0 0 3 0 2 1 0 4 9
0 3 5 0 9 0 4 8 0
0 9 0 0 0 0 0 3 1
0 7 6 0 1 0 9 2 0
3 1 0 9 7 0 2 0 0
0 0 9 1 8 2 0 0 3
0 0 0 0 6 0 1 0 0

hard 
2 0 0 5 0 7 4 0 6
0 0 0 0 3 1 0 0 0
0 0 0 0 0 0 2 3 0
0 0 0 0 2 0 0 0 0
8 6 0 3 1 0 0 0 0
0 4 5 0 0 0 0 0 0
0 0 9 0 0 0 7 0 0
0 0 6 9 5 0 0 0 2
0 0 1 0 0 6 0 0 8

Evil
6 0 0 0 2 0 1 0 7
0 8 0 9 0 0 0 0 0
0 0 0 0 0 0 0 5 0
1 0 0 0 7 0 2 0 4
0 0 6 0 0 1 0 0 0
0 0 0 0 0 0 3 0 0
4 0 0 0 0 0 0 3 0 
0 0 9 2 0 0 4 0 5
0 0 0 0 5 0 0 6 0

Easy 
0 0 0 2 0 0 0 0 1
0 8 0 0 7 3 4 0 9
0 0 2 1 4 5 0 7 8
0 0 9 0 0 0 0 5 0
5 3 0 7 6 0 0 8 4
0 2 0 4 0 9 0 0 0
4 0 6 5 1 0 0 0 0
0 0 8 9 3 0 7 4 0
7 0 3 8 2 4 0 0 0
Easy 
0 2 6 0 0 1 0 0 4
3 0 0 0 0 9 2 5 7
4 9 5 0 0 0 0 1 0
0 4 0 0 5 3 1 0 0 
0 6 3 2 1 0 7 4 0
0 0 1 0 9 0 0 3 2 
0 8 9 0 7 0 0 0 1
6 0 0 0 8 0 4 2 9
0 0 0 9 6 0 3 0 8

Easy
0 7 0 8 0 6 0 0 0
0 0 9 4 0 0 0 0 8
0 0 6 9 0 3 7 4 0
6 0 2 0 0 0 8 7 1
0 0 0 0 7 0 0 0 0
1 4 7 0 0 0 9 0 2
0 6 8 2 0 1 3 0 0 
9 0 0 0 0 5 1 0 0 
0 0 0 3 0 9 0 2 0 

*/