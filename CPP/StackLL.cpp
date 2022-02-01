#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val =0){
		this->data = val;
		this->next = NULL;
	}
};

class Stack{
public:
	Node* top;
	int remSize=0;
	int n=0;
	Stack(int size=5){
		this->top = NULL;
		this->remSize = size;
		this->n = size;
	}	

	bool isEmpty(){
		if( this->remSize==n ){
			return true;
		}
		return false;
	}

	void push(int val){
		if( this->remSize == 0 ){
			cout<<"\nOVERFLOW\n";
			return;
		}

		if( this->top == NULL){
			this->top = new Node(val);
			this->remSize--;
			return;
		}

		Node* newNode = new Node(val);
		newNode->next = this->top;
		this->top = newNode;
		this->remSize--;
	}

	int pop(){
		if( this->isEmpty()){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}

		Node* toDelete = this->top;
		this->top = this->top->next;

		int save = toDelete->data;

		cout<<"\n";

		this->remSize++;
		delete toDelete;

		return save;
	}

	int peek(){
		if(this->remSize==n){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}
		return (this->top->data);
	}


};



int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	string end = "\n";
	Stack st(7);
	st.push(1);
	st.push(12);
	st.push(123);
	st.push(1234);
	st.push(12345);
	st.push(123456);
	st.push(1234567);

	int sum = 0 ;
	while(!st.isEmpty()){
		cout<<st.peek();
		sum+=st.pop();
	}

	cout<< ((st.isEmpty()) ? "STACK IS EMPTY\n" : "STACK IS NOT EMPTY\n") ;

	cout<<"SUM OF ALL THE NUMBERS WERE INSIDE THE STACK = "<<sum<<end;

	return 0;
}