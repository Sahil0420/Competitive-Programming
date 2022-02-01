#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<=n/2;i++)
		if(n%i==0) return false;
	return true;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int arr[5]={9,3,2,4,5};
	for(int i : arr){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}
