#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class rowMajor{
public:
	void printArray(int **arr , int n ){
		printf("::::::::::::::::::ROW MAJOR ORDER::::::::::::::::::::::\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<"\t";
			}
			cout<<endl;
		}
	}	
};

class colMajor{
public:
	void printArray(int **arr, int n ){
		printf("::::::::::::::::::COLUMN MAJOR ORDER:::::::::::::::::::\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[j][i]<<"\t";
			}
			cout<<"\n";
		}
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif
	int n;cin>>n;
	// int **arr = new int*[n];
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}

	printf("::::::::::::::::::ROW MAJOR ORDER::::::::::::::::::::::\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}

	printf("::::::::::::::::::COLUMN MAJOR ORDER:::::::::::::::::::\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<"  ";
		}
		cout<<"\n";
	}	

	auto a = &arr;
	cout<<a;

	 

return 0;
}