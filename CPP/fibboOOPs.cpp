#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Fibbo{
public:
	void display(){
		int a=0,b=1;
		int c=a+b;
		cout<<a<<" "<<b<<" ";
		while(c<=100){
			cout<<c<<" ";
			a=b;
			b=c;
			c=a+b;
		}
	}
};

class Fact{
	int num , ans=1;
public:
	int factorial(){
		cout<<"Enter a number : ";
		cin>>num;
		for(int i=1;i<=num;i++) ans*=i;
		return ans;
	}

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	Fibbo obj;
	obj.display();

	Fact f;
	cout<<f.factorial();

	int nu = 3246;

	return 0;
}