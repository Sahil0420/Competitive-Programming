#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool isEven(int n){
	return (n%2==0);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n;cin>>n;
	int arr[n][n];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];

	int Even=0,Odd=0;
	for(auto ar : arr){
		
		for(int i=0;i<n;i++){
			if(isEven(ar[i]))
				Even++;
			else
				Odd++;
		}
	}

	cout<<"NUMBER OF EVEN : "<<Even<<"\n";
	cout<<"NUMBER OF ODDS : "<<Odd<<"\n";

return 0;
}
	