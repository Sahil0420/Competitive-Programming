#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Operations
{
public:
	void sum(int a , int b){
		cout<<"sum of two integers => "<<a+b<<"\n";
	}

	void sum(int a , int b , int c){
		cout<<"sum of three integers => "<<a+b+c<<"\n";
	}

	void sum(float a , float b){
		cout<<"Sum of two floats => "<<a+b<<'\n';
	}
};

int main(){
	char end = '\n';

	Operations obj;
	obj.sum(5,6);
	obj.sum(5,6,7);
	obj.sum(5.4f,6.2f);

	return 0;
}