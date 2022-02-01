#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void table(int n , int m=10){
	for(int i=1;i<=m;i++)
	cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
}

int sum(int a , int b){
	return (a+b);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	int n;cin>>n;

	table(745454);

	int arr[50];

	cout<<sizeof(arr);

	cout<<sum(5,3);

	long a=0;cin>>a;
	cout<<"long is "<<a;

	return 0;
}