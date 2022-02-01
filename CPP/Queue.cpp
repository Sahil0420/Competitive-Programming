#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val=INT_MIN){
		this->data = val;
		this->next = NULL;
	}
};

class Queue{
public:
	Node* front;
	Node* rear;
	Queue(){
		this->front = NULL;
		this->rear = this->front;
	}

	void enqueue( int val ){
		if( this->front == NULL){
			this->front = this->rear = new Node(val);
			return;
		}
		Node* new_node = new Node(val);
		this->rear->next = new_node;
		this->rear = new_node;
	}

	int dequeue(){
		if(this->front == NULL ){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}

		Node* toDelete = this->front;

		this->front = this->front->next;

		int ret = toDelete->data;

		delete toDelete;

		return ret;
	}

	int rearPeek(){
		if(this->rear== NULL){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}
		return this->rear->data;
	}

	int frontPeek(){
		if(this->front == NULL){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}
		return this->front->data;
	}

};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';
	
	Queue q;
	q.enqueue(100);
	q.enqueue(200);
	q.enqueue(300);
	q.enqueue(400);
	q.enqueue(500);
	q.dequeue();
	cout<<q.frontPeek();
	cout<<q.rearPeek();
	return 0;
}
