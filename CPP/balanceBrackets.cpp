#include<iostream>
#include<stack>
#include<unordered_map>
//#include<bits/stdc++.h>
using namespace std;

int getNum(char c ){
	unordered_map<char , int> symbol={ {'{',-1}  , {'}',1} , {'[',-2} , {']',2} ,{'(',-3} , {')',3}};
	return symbol[c];
}

bool isBalanced(string str){
	stack<int> brak;
	for(char c : str){
		if(brak.empty() and getNum(c)>0){
			return false;
		}
		
		if(!brak.empty() and (brak.top() + getNum(c) == 0 ))
			brak.pop();
		else
			brak.push(getNum(c));

	}

	if(brak.empty())
		return true;
	return false;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	int n;cin>>n;
	while(n-->0){
		string brackets;
		cin>>brackets;
		string ans = (isBalanced(brackets)) ? "Balanced" : "Not Balanced";
		cout<<brackets<<"\t"<<ans;
		cout<<"\n";
	}

return 0;
}