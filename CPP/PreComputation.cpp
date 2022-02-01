/*
Given T Test cases and in each test case a number N. Print its factorial
for each test case % M where M = 10^9+7

CONTRAINTS
1 <= T <= 10^5
1 <= N <= 10^5
*/

/*
			QUESTION 2 

Given array a of N integers.Given Q queries and in each query
given a number X , print count of that number in array.

CONTRAINTS
1 <= N <=10^5
1 <= a[i] <=10^7
1 <= 0 <= 10^5
*/

#include"bits/stdc++.h"
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];
const int NN = 1e7+10;
long long hsh[NN];

int main(int argc, char const *argv[])
{

	fact[0] = fact[1] = 1;
	for(int i=2 ; i<N ; i++){
		fact[i] = fact[i-1]*i;
	}

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<fact[n]<<endl;
	}

	cout<<"Question 2 Answer : "<<endl;
/*	int nn;cin>>nn;
	int a[nn];
	for(int i=0;i<nn;i++){
		cin>>a[i];
	}

	int q;cin>>q;
	while(q--){
		int x;
		cin>>x;
		int ct=0;
		for(int i=0;i<nn;i++){
			if(a[i]==x){
				ct++;
			}
		}
		cout<<x<<" presents "<<ct<<" times "<<endl;
	}*/
	int num;cin>>num;
	int a[num];
	for(int i=0;i<num;i++){
		cin>>a[i];
		hsh[a[i]]++;
	}

	int q;cin>>q;
	while(q--){
		int x;cin>>x;
		cout<<hsh[x]<<endl;
	}

	return 0;
}
