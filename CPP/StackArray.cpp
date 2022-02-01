#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 5

class STACK{
public:
	int arr[MAX_SIZE]={0};

	int top = -1;

	void push(int val){
		if(this->top == MAX_SIZE){
			cout<<"\nOVERFLOW\n";
			return;
		}

		this->arr[++top] = val;
	}

	int pop(){
		if(this->top==-1){
			cout<<"\nUNDERFLOW\n";
			return -1;
		}
		cout<<"\n";
		int save = this->arr[top--];
		return save;
	}

	int peek(){
		if(this->top==-1){
			cout<<"\nUNDERFLOW\n";
			return -1;
		}
		cout<<"\n";
		return this->arr[top];
	}

	bool isEmpty(){
		if(top==-1)
			return 1;
		return 0;
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	STACK st;
	st.push(4234);
	cout<<st.peek();

	st.push(6263);
	cout<<st.peek();

	st.push(434);
	cout<<st.pop()<<"\n";

	cout<<st.peek();

	cout<<(st.isEmpty() ? "EMPTY\n" : "NOT EMPTY\n");

return 0;
}