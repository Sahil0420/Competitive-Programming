#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class mathop{
public:
	int x , y;
	mathop(int a , int b){
		x = a;
		y = b;
	}

	int sum(){
		return this->x+this->y;
	}

	string isEven(int n){
		if(n&1)
			return "ODD";
		else
			return "EVEN";
	}

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	mathop obj(5,3);

	// cout<<5*obj.sum();

	for(int i=0;i<=100;i++)
		cout<<i<<" = "<<obj.isEven(i)<<end;

	return 0;
}