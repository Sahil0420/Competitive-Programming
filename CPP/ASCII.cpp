#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	string a;getline(cin,a);
	for(char c : a)
		cout<<c<<" = "<<int(c) <<"\n";		

return 0;
}
