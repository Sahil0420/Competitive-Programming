#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Abc{
public:
	static count=0;
	Abc(){
		this->count+=1
	}
	static showCount(){
		cout<<this->count;
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	Abc obj;
	obj.showCount();

	return 0;
}