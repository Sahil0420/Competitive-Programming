#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val){
		this->data = val;
		this->next = NULL;
	}
};


class CircularList{
public:
	Node* head;
	CircularList(){
		this->head = NULL;
	}

	void append( int val){
		Node* newNode = new Node(val);
		if( this->head == NULL){
			this->head = newNode;
			newNode->next = this->head;
			return;
		}

		Node * temp = this->head;
		while(temp->next != this->head)
			temp = temp->next;

		newNode->next = temp->next;
		temp->next = newNode;
	}

	void printList(){
		if(this->head == NULL){
			cout<<"\nLIST IS EMPTY\n";
			return ;
		}

		if(this->head->next == this->head){
			cout<<this->head->data<<" --> NULL\n";

			return ;
		}

		Node* temp = this->head;
		while(temp->next!= this->head){
			cout<<temp->data<<" --> ";
			temp = temp->next;
		}
		cout<<temp->data<<"-->";
		cout<<"NULL\n";
	}

	void insertAt(int pos , int val){
		if(this->head == NULL){
			cout<<"\nLIST IS EMPTY\n";
			return;
		}

		if(this->head->next == this->head and pos==1){
			this->head->data = val;
			return;
		}

		Node* iter = this->head;
		Node* newNode = new Node(val);
		while(iter->next != this->head and --pos>1){
			iter = iter->next;
		}	

		if((iter->next == this->head and pos==1) or (iter->next != this->head and pos==1)){
			newNode->next=iter->next;
			iter->next = newNode;
			return;
		}

		if(iter->next == this->head and pos!=1){
			cout<<"\nINDEX OUT OF BOUND\n";
			return;
		}
	}

	unsigned int getLength(){
		unsigned int count = 0;
		if(this->head == NULL)
			return 0;

		if(this->head->next == this->head){
			return 1 ;
		}

		for(Node* i = this->head ; i->next!=this->head ; i = i->next)
			count++;

		return count+1;
	}

	

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	CircularList LIST;
	// LIST.insertAt(1 , 5);
	LIST.append(1);
	LIST.append(2);
	LIST.append(3);
	LIST.printList();
	LIST.insertAt(3 ,4);
	LIST.printList();

	cout<<"\nLENGTH OF THE CIRCULAR LINKED LIST  : "<<LIST.getLength();

return 0;
}