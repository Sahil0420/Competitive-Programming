#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int num;
	int toFind;

	void getData(){
		cout<<"Enter the number : ";
		cin>>num;
		cout<<"Enter the digit you want to find : ";
		cin>>toFind;
	}

	void find(){
		while(num!=0){
			if(num%10 == toFind){
				cout<<"PRESENT"; return ;num/=10;
			} 
			num/=10;
		} 
	cout<<"NOT PRESENT";
	}
};

using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	Solution obj;
	obj.getData();
	obj.find();

return 0;
}