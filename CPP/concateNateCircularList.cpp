#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(){
		this->data = 0;
		this->next = NULL;
	}

	Node(int val){
		this->data = val;
		this->next = NULL; 
	}
};

class CircularList{
	Node* head = NULL;
public:
	void insertAtEnd(int val){
		if(this->head == NULL){
			this->head = new Node(val);
			this->head->next = this->head;
			return;
		}

		Node* ptr = this->head;
		while(ptr->next != this->head){
			ptr = ptr->next;
		}

		Node* newNode = new Node(val);
		newNode->next = ptr->next;
		ptr->next = newNode;
	}	

	void display(){
		if(this->head == NULL){
			cout<<"Underflow\n";
			return;
		}
		Node* ptr = this->head;
		while(ptr->next != this->head){
			cout<<ptr->data<<" ";
			ptr = ptr->next;
		}
	}

	Node* getHead(){
		return this->head;
	}

	void concatenate(Node* head1){
		Node* ptr = this->head;
		while(ptr->next!=this->head){
			ptr=ptr->next;
		}

		ptr->next = head1;
		ptr = ptr->next;
		while(ptr->next!=head1){
			ptr=ptr->next;
		}
		ptr->next = this->head;
	}
};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout); 
	#endif
		
	char end = '\n';
	CircularList list1;
	CircularList list2;
	list1.insertAtEnd(1);
	list1.insertAtEnd(2);
	list1.insertAtEnd(3);
	list1.insertAtEnd(4);
	list2.insertAtEnd(5);
	list2.insertAtEnd(6);
	list2.insertAtEnd(7);
	list2.insertAtEnd(8);
	list2.insertAtEnd(9);
 	cout<<"Printing List1 ==> ";
	list1.display();
 	cout<<endl;
 	cout<<"Printing List1 ==> ";
	list2.display();
 	cout<<"After concatenatign two lists ==> \n";
 	list1.concatenate(list2.getHead());
 	list1.display();
	return 0;
}