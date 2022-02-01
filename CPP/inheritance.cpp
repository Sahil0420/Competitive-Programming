#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class ABC{
public:
	int n1=0,n2=0;
	void getdata(){
		cout<<"ENETR NUMBER 1 : ";
		cin>>n1;
		cout<<n1<<"\n";
		cout<<"ENTER NUMBER 2 : ";
		cin>>n2;
		cout<<n2<<"\n";
	}
};

class XYZ : public ABC{
public:
	int getSum(){
		cout<<"RESULT = ";
		return n1+n2;
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	XYZ obj;
	obj.getdata();
	cout<<obj.getSum();	

return 0;
}