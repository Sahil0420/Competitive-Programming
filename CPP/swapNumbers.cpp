#include"iostream"
// #include<bits/stdc++.h>

class Solution{
public:
	void swap(int &a, int &b){
		a = a+b;
		b = a-b;
		a = a-b;
	}

	void swap2(int &a , int &b){
		a = a^b;
		b = a^b;
		a = a^b;
	}
};


using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int a=0,b=0;
	cin>>a>>b;
	cout<<"BEFORE SWAP : A =  "<<a<<" B = "<<b<<"\n";
	Solution obj;
	obj.swap2(a,b);
	cout<<"AFTER SWAP : A =  "<<a<<" B = "<<b<<"\n";
	cout<<endl;

	cin>>a>>b;
	cout<<"BEFORE SWAP : A =  "<<a<<" B = "<<b<<"\n";
	obj.swap(a,b);
	cout<<"AFTER SWAP : A =  "<<a<<" B = "<<b<<"\n";


return 0;
}