#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val = 0){
		this->data = val;
		this->next = NULL;
	}
};

class linkedList
{

public:
	Node* head;
	linkedList(){
		this->head = NULL;
	}
	
	void insertAtEnd(int val){
		if(this->head == NULL){
			this->head = new Node(val);
			return ;
		}
		Node* temp = this->head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = new Node(val);
	}

	void printList(){
		if(this->head == NULL ){
			cout<<"\nEMPTY LIST\n";
			return;
		}
		Node * temp = this->head;
		cout<<"\n";
		while(temp){
			cout<<temp->data<<" --> ";
			temp=temp->next;
		}
		cout<<"NULL\n\n";
	}

	void insertAtHead(int val){
		Node* newNode = new Node(val);
		if(this->head == NULL){
			newNode->next = this->head;
			this->head = newNode;
			newNode->next = NULL;
			return;
		}

		newNode->next = this->head;
		this->head = newNode;
	}

	void removeNode( int key ){
		if(this->head == NULL){
			cout<<"\nUNDERFLOW\n";
			return;
		}

		if(key==this->head->data){
			Node* toDelete = this->head;
			this->head = this->head->next;
			delete toDelete;
			return;
		}

		Node* temp = this->head;
		
		while( temp->next!=NULL and temp->next->data != key){
			temp = temp->next;
		}


		if (temp->next == NULL and temp->data != key ){
			cout<<"\nDATA NOT FOUND\n";
			return;
		}


		Node* toDelete = temp->next;
		temp->next = temp->next->next;

		delete toDelete;
	}

	int getLength(){
		if(this->head == NULL){
			return 0;
		}

		if(this->head->next == NULL)
			return 1;

		int count=0;

		Node* temp = this->head;

		while(temp) {
			temp = temp->next;
			count++;
		}	

		return count;

	}	

	void deleteNode(int pos ){
		if(this->head == NULL){
			cout<<"\nUNDERFLOW\n";
			return;
		}

		if(pos==1){
			Node* toDelete = this->head;
			this->head = this->head->next;
			delete toDelete;
		}


		if(pos>this->getLength()){
			cout<<"\nINDEX OUT OF BOUND\n";
			return;
		}

		Node* temp = this->head;
		
		while(pos-->2)temp = temp->next;

		Node* toDelete = temp->next;
		temp->next = temp->next->next;

		delete toDelete;
	}

	int getHead(){
		return this->head->data; 
	}

	void  setData(int pos , int val){
		if(this->head == NULL){
			cout<<"\nEMPTY LIST\n";
		}

		if(pos>this->getLength()){
			cout<<"\nINDEX OUT OF BOUND \n";
			return ;
		}

		Node* temp = this->head;

		while(pos-->1)
			temp = temp->next;

		temp->data = val;
	}

	void insertAt(int pos , int val){

		if(pos>this->getLength()){
			cout<<"\nINDEX OUT OF BOUND\n";
			return;
		}

		if(this->head == NULL and pos==1){
			this->head = new Node(val);
			return;
		}

		if(this->head == NULL and pos>1){
			cout<<"\nINDEX OUT OF BOUND\n";
			return;
		}

		Node* temp = this->head;
		while( --pos > 1 ){
			temp = temp->next;
		}

		Node* newNode =  new Node(val);
		newNode->next = temp->next;
		temp->next = newNode;
	}

	void p(){
		if( this->head == NULL ){
			cout<<"\nFUCK\n";
			return;
		}

		for(Node* i = this->head ; i!= NULL ; i = i->next)
			cout<<i->data<<" --> ";
		
		cout<<"NULL\n";

	}
};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	linkedList LIST;

	int n;cin>>n;
	while(n--){
		int val;cin>>val;
		LIST.insertAtEnd(val);
	}
	LIST.printList();

	cin>>n;
	while(n--){
		int val;cin>>val;
		LIST.insertAtHead(val);
	}

	LIST.printList();

	LIST.removeNode(5);

	LIST.printList();

	cout<<endl;

	LIST.removeNode(5);

	LIST.printList();

	cout<<"LENGTH OF THE LIST : "<<LIST.getLength()<<"\n";

	LIST.deleteNode(4);

	cout<<"LENGTH OF THE LIST : "<<LIST.getLength()<<"\n";

	LIST.setData(3,343);

	LIST.printList();

	LIST.insertAt(4 , 36473);

	LIST.printList();

	LIST.p();
	return 0;

}

/*
5
1 2 3 4 5
4
2 4 6 7
*/