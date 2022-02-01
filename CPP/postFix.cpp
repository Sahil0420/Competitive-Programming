#include<iostream>
#include<stack>
//#include<bits/stdc++.h>
using namespace std;

int prec(char c){

	if('c' == '^')
		return 3;
	else if(c=='%' or c == '*' or c=='/')
		return 2;
	else if(c=='+' or c=='-')
		return 1;
	else
		return -1;
}

string infixToPostfix(string exp){
	stack<char> st;
	string res="";

	for(int i=0;i<exp.length();i++){
		if((exp[i]==' ') or (exp[i] >= 'a' and exp[i]<='z') or (exp[i]>='A' and exp[i]<='Z') or(exp[i] >= '0' and exp[i]<= '9') ){
			res+=exp[i];
		}
		else if(exp[i]=='('){
			st.push(exp[i]);
		}
		else if(exp[i] == ')'){
			while(!st.empty() and st.top()!='('){
				res+=st.top();
				st.pop();
			}
			if(!st.empty()){
				st.pop();
			}
		}
		else{
			while(!st.empty() and prec(st.top()) >= prec(exp[i])){
				res+=st.top();
				st.pop();
			}
			st.push(exp[i]);
		}
	}
		
	while(!st.empty()){
		res+= st.top();
		st.pop();
	}

	return res;
}

int solveOperation(int n1 , int n2 , char c ){
	float ans=0;
	switch(c){
		case '*':
			ans = n1*n2;
			break;
		case '+':
			ans = n1+n2;
			break;
		case '/':
			ans = n1/n2;
			break;
		case '%':
			ans = n1%n2;
			break;
		case '-':
			ans = n1-n2; 
			break;
		default:
			cout<<"invalid operator";
	}

	return ans;
}

int solvePostfix(string exp){
	stack<int> st;
	int temp=0;
	for(int i=0;i<exp.length();i++){
		if((exp[i]>='0') and (exp[i]<='9')){
			temp = temp*10+(int(exp[i]-int('0')));
		}else if(exp[i]==' ' and temp!=0){
			st.push(temp);
			temp = 0;
		}else if((exp[i]=='+') or(exp[i]=='-') or (exp[i]=='/') or (exp[i]=='%') or (exp[i]=='*')){
			int n2 = st.top();
			st.pop();
			int n1 = st.top();
			st.pop();
			char c=exp[i];
			st.push(solveOperation(n1,n2,c));
		}
	}
	return st.top();
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	string exp;
	getline(cin,exp);

	cout<<infixToPostfix(exp)<<"\n";

	string exp2="";
	getline(cin,exp2);
	cout<<solvePostfix(exp2);
	return 0;
}