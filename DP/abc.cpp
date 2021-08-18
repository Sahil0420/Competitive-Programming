#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt","r",stdin);
	// 	freopen("output.txt","w",stdout);
	// #endif
	int n = 100;
	// cout<<"sahil chandel is the best";
	for(int i=1 ; i<= n ; i++){
		for( int j =n;j>=1 ; j--){
			if (i>=j)
			cout<<" *";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
