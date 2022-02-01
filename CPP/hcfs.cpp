#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int a=10 ,b=50;
	int ans=0;
	int min = (a<b) ?  a : b;
	for(int i=1;i<=min;i++){
		if(a%i==0 and b%i==0)
			ans=i;
	}

	cout<<ans;

return 0;
}