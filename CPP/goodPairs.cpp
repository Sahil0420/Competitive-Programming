#include<iostream>
// #include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int GCD(int a , int b){
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a>b)
		return GCD(b , a-b);
	return GCD(a, b-a);
}

int LCM(int a , int b){
	int gcd = GCD(a,b);
	return (a*b)/gcd;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	cout<<"GCD OF 4 and 10 = "<<GCD(4,10)<<'\n';
	cout<<"LCM OF 4 and 10 = "<<LCM(4,10)<<'\n';
	
	string s = "6315232";
	if(count(s.begin() , s.end() , '0') || count(s.begin() , s.end() , '5'))
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}

