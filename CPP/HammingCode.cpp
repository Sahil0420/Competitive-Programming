#include<iostream>
// #include<bits/stdc++.h>
#include<math.h>
#include<string>
#include<unordered_map>

using namespace std;

void printmap(unordered_map<int,int> a){
	for(auto i : a)
		cout<<i.first<<"-->"<<i.second<<"\n";
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	string num = "";
	cin>>num;
	cout<<"DATA = "<<num;
	int n = num.size();	
	int m=0;
	for(int i=1;;i++){
		if(pow(2,i)>=(i+n+1)){
			m=i;
			break;
		}
	}

	unordered_map<int ,int> code;
	for(int i=1;i<=m+n;i++){
		code[i] = 0;
	}

	for(int i = 0 ;i<m;i++){
		code[pow(2,i)] = 5;
	}

	cout<<"\n";
	int c=1;
	int numi = stoi(num);
	while(numi!=0){
		if(code.find(c) != code.end() and code[c]!=5){
			int a = numi%10;
			code[c] = a;
			numi/=10;
		}
		c++;
	}


	printmap(code);


return 0;
}