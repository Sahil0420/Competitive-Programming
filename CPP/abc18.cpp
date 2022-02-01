#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	int a = 6;
	int b = 5;

	int *p = &b;
	cout<<p<<end;
	cout<<--*p<<"\t";
	cout<<++*p<<"\t";
	cout<<*p++<<"\t";
	cout<<*p;

	cout<<endl<<endl;

	for(int i=65;i<91;i++)
		cout<<char(i)<<" "<<i<<end;



	return 0;
}