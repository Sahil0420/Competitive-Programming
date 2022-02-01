#include<iostream>
// #include<bits/stdc++.h>

using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n=0;
	do{

		cin>>n;

		switch(n){

		case 0:
			break;

		case 1:
			cout<<"MONDAY\n";
			break;

		case 2 :
			cout<<"TUESDAY\n";
			break;

		case 3 :
			cout<<"WEDNESDAY\n";
			break;

		case 4 :
			cout<<"THURSDAY\n";
			break;

		case 5 :
			cout<<"FRIDAY\n";
			break;

		case 6 :
			cout<<"SATURDAY\n";
			break;

		case 7 :
			cout<<"SUNDAY\n";
			break;

		default:
			cout<<"INVALID DAY\n";

		}	
	}while(n!=0);

return 0;
}