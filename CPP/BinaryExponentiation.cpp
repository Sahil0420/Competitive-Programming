#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int binMul(int a , int b){
	int ans = 0 ;
	while (b>0){
		if(b&1)
			ans = (ans+a);
		a=a+a;
		b>>=1;
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		cout<<a<<" X "<<b<<" = "<<binMul(a,b)<<"\n";
	}
	return 0;
}
