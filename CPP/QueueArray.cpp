#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;
#define N 5

#define end '\n';

class Queue{
public:
	int arr[N]={0};
	int rear=-1,front=-1;

	void enqueue(int val){
		if(this->rear==-1 and this->front==-1){
			this->arr[++this->rear] = val;
			this->front = this->rear;
			return;
		}

		if(this->rear==N-1){
			cout<<"\nOVERFLOW\n";
			return;
		}

		this->arr[++this->rear] = val;
	}

	int dequeue(){
		if(this->front==-1 and this->rear==-1){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}

		if(this->rear==0){
			this->front = -1;
			return this->arr[this->rear--];
		}

		int ret = this->arr[this->front];
		for(int i=1;i<=rear;i++){
			this->arr[i-1] = this->arr[i];
		}
		this->rear--;
		return ret;
	}

	void display(){
		for(int i=0;i<=rear;i++)
			cout<<arr[i]<<" ";
	}

	int rearPeek(){
		if(this->rear==-1){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}
		return this->arr[this->rear];
	}

	int frontPeek(){
		if(this->front==-1){
			cout<<"\nUNDERFLOW\n";
			return INT_MIN;
		}
		return this->arr[this->rear];
	}


};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	

	Queue q;
	q.enqueue(100);
	q.enqueue(200);
	q.enqueue(300);
	q.enqueue(400);
	q.enqueue(500);
	q.dequeue();
	q.enqueue(600);
	q.display();
	q.enqueue(600);
	cout<<q.dequeue()<<end;
	cout<<q.dequeue()<<end;
	cout<<q.dequeue()<<end;
	cout<<q.dequeue()<<end;
	cout<<q.dequeue()<<end;
	cout<<q.dequeue()<<end;
	cout<<q.rearPeek();
	cout<<q.frontPeek();
	q.enqueue(700);
	q.display();

	return 0;
}