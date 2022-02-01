#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	Node* prev;
	int data;
	Node* next;	
	Node(int val=0){
		this->prev = NULL;
		this->data = val;
		this->next = NULL;
	}
};

class DoublyLL{
public:
	Node* head;
	DoublyLL(){
		this->head = NULL;
	}

	void insertAtHead(int val){
		if(this->head == NULL){
			this->head = new Node(val);
			return;
		}

		Node* newNode = new Node(val);
		newNode->next = this->head;
		this->head->prev = newNode;
		this->head = newNode;
	}

	void printList(){
		if(this->head == NULL){
			cout<<"\nLIST IS EMPTY\n";
			return;
		}
		cout<<"NULL -> ";
		if(this->head->next == NULL){
			cout<<this->head->data<<" -> NULL";
			return;
		}

		Node* temp = this->head;
		while(temp!=NULL){
			cout<<temp->data<<" -> "; 
			temp = temp->next;
		}
		cout<<"NULL\n";
	}

	void printListReverse(){
		if(this->head == NULL)
			cout<<"\nNULL\n";

		if(this->head->next == NULL)
			cout<<"\n"<<this->head->data<<" -> NULL\n";

		Node *i = this->head;
		cout<<"NULL <- ";
		while(i->next!=NULL)
			i = i->next;

		while(i->prev!=NULL){
			cout<<i->data<<" <- ";
			i = i->prev;
		}
		cout<<i->data<<" <- ";
		cout<<"NULL\n";

	}

	unsigned int getLength(){
		if(this->head == NULL)
			return 0;

		if(this->head->next == NULL)
			return 1;

		unsigned int count = 0;
		for(Node * i = this->head ; i->next!=NULL ; i = i->next)
			count++;

		return count+1;
	}	

	void insertAt(int pos , int val){
		if(this->head == NULL and pos>1){
			cout<<"INVALID POS";
			return;
		}

		if(this->head->next == NULL and pos==1){
			this->head->data = val;
			return;
		}

		Node * temp = this->head;
		while(temp->next != NULL and --pos>1){
			temp = temp->next;
		}

		if(temp->next==NULL and pos!=1){
			cout<<"\nINDEX OUT OF BOUND \n";
		}

		Node* newNode = new Node(val);

		if(pos==1){
			newNode->next = temp->next;
			newNode->prev = temp;
			newNode->next->prev = newNode;
			temp->next = newNode;
		}
	}


};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif
	//code goes here
	int n;cin>>n;
	DoublyLL LIST;
	while(n--){
		int a;cin>>a;
		LIST.insertAtHead(a);
	}

	LIST.insertAt(1,100);

	LIST.printList();

	cout<<"LENGTH OF THE DOUBLY LINKED LIST :"<<LIST.getLength()<<"\n";

	LIST.printListReverse();

return 0;
}