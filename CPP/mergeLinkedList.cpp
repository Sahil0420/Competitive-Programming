#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};

class LinkedList{

public:
	Node* head;
	LinkedList(){
		head=NULL;
	}

	void addNode(int val){
		if (this->head==NULL){
			this->head = new Node(val);
			return;
		}
		Node* temp = this->head;
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = new Node(val);
	}

	void printList(){
		Node* temp = this->head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp = temp->next;
		}
		cout<<" X ";
	}

	void pop(){

		if(this->head->next->next == NULL){
			Node* temp = this->head->next;
			this->head->next = NULL;
			delete temp;
			return;
		}

		Node* temp = this->head;
		while(temp->next->next!= NULL){
			temp = temp->next;
		}
		Node* todelete = temp->next;
		temp->next = NULL;
		delete todelete;
	}

	Node* getMid(){
		Node* slow = this->head;
		Node* fast = this->head->next;
		while(fast and fast->next){
			fast = fast->next->next;
			slow = slow->next;
		}
		return slow;
	}

};


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	LinkedList sll;
	sll.addNode(100);
	sll.addNode(200);
	sll.addNode(300);
	sll.addNode(400);
	sll.addNode(500);
	// sll.pop();
	sll.printList();
	cout<<sll.getMid()->data;
	return 0;
}
