#include<iostream>
//#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	stack<char> st;

	string str;
	getline(cin , str);

	for(char c : str)
		st.push(c);

	string rev = "";
	while(!st.empty()){
		rev+=st.top();
		st.pop();
	}

	cout<<"NORMAL  STRING : "<<str<<"\n";
	cout<<"REVERSE STRING : "<<rev<<"\n";


return 0;
}