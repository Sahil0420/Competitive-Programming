// WAP to access the value of variable using the variable
#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	/*to calculate the area of circle using pointers */
	float pi = 3.14f;
	float *Pi = &pi;
	int radius=0;cin>>radius;
	int * r = &radius;


	cout<<"Area of circle = "<<((*Pi)*(*r)*(*r))<<" cm^2"<<end;
	/*to produce the even numbers*/
	int principle=0;cin>>principle;
	int *p = &principle;
	int time=0;cin>>time;
	int *t=&time;

	/*A = p(1+rt)*/
	int fAmount = ((*p) * (1 + ((*r)*(*t))));

	cout<<"SIMPLE INTEREST  : "<<fAmount<<end;
	cout<<"SIMPLE INTEREST address : "<<&fAmount<<end;
	/*to calculate simple interest */

	return 0;
}


/*
	Each allocated space have an unqiue address
	which is used by the complier to acess 
	the value stored in them but with the help of the
	pointer we can directly work with value stored 
	in pasrticular adress

*/