#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void upperTriangle(int n ){	
	for(int i=0;i<=n;i++){
		for(int j=0;j<n;j++)
			if(j<n-i)
				cout<<"  ";
			else
				cout<<"* ";

		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void lowerTriangle(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i)
				cout<<"  ";
			else
				cout<<"* ";
		}

		for(int j=n;j>i;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void diamond(int n ){
	upperTriangle(n);
	lowerTriangle(n);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	int n;cin>>n;

	diamond(n);

	return 0;
}
