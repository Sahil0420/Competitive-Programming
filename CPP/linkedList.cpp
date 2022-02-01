#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int val=0){
		this->data = val;
		this->next = NULL;
	}
};

class linkedList
{
public:
	Node* head;
	linkedList(){
		head = NULL;
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
		Node * new_node = new Node(val);
		if(this->head == NULL){
			this->head = new_node;
			return;
		}

		new_node->next = this->head;
		this->head = new_node;
		return;
	}

	void removeNode(int key){
		if(head==NULL){
			cout<<"UNDERFLOW\n";
			return;
		}

		if(this->head->data == key){
			Node* toDelete = head;
			this->head = this->head->next;
			delete toDelete;
			return;
		}

		Node* temp = this->head;
		while(temp->next!=NULL and temp->next->data != key)
			temp = temp->next;

		if(temp->next == NULL){
			cout<<"NODE NOT FOUND \n";
			return ;
		}

		Node* toDelete = temp->next;
		temp->next = temp->next->next;
		delete toDelete;
	}

	void deleteNode(int pos){
		if(this->head==NULL){
			cout<<"\nUNDERFLOW\n";
			return;
		}
		
		int len = this->getLength();
		
		if(len<pos){
			cout<<"\nINDEX OUT OF BOUND\n";
			return;
		}

		if(pos==1){
			Node* ptr = this->head;
			this->head = this->head->next;
			delete ptr;
		}

		Node* ptr = this->head;
		Node* prev = NULL;
		while(pos--){
			prev = ptr;
			ptr = ptr->next;
		}

		prev->next = ptr->next;
		delete ptr;

	}

	int getLength(){
		Node* temp = this->head;
		int count=0;
		while(temp){
			count++;
			temp=temp->next;
		}
		return count;
	}

	void getHead(){
		cout<<this->head->data<<"\n";
	}

	int getData(int pos){
		if(this->head==NULL or pos<=0 or pos>this->getLength())
			return INT_MIN;

		if(pos=1)
			return this->head->data;
		Node*ptr = head;
		while(pos-->1)
			ptr=ptr->next;
		return ptr->data;
	}

	void setData(int pos , int newData){
		if(this->head==NULL){
			cout<<"\nEMPTY LIST\n";
		}

		if(pos<=0 or pos>this->getLength()){
			cout<<"\nINVALID POSITION\n";
			return;
		}

		if(pos==1){
			this->head->data = newData;
			return;
		}

		Node* ptr = this->head;
		while(pos-->1){
			ptr = ptr->next;
		}
		ptr->data = newData;

	}

	void getMid(){
		if(this->head == NULL){
			cout<<"\nEMPTY LIST\n";
			return;
		}

		if( this->head->next == NULL or this->head->next->next == NULL ){
			cout<<head->data<<"\n\n";
			return;
		}

		Node* fast = this->head;
		Node* slow = this->head;

		while(fast!=NULL){
			// cout<<fast->data<<endl;
			fast = fast->next->next;
			slow = slow->next;
		}

		cout<<slow->data<<"\n\n";
	}

	void merge(){
		
	}

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	//code goes here
	linkedList LIST;
	int n ;cin>>n;
	while(n--){
		int data;cin>>data;
		LIST.insertAtEnd(data);
	}
	LIST.printList();

	
	cin>>n;
	while(n--){
		int data;cin>>data;
		LIST.insertAtHead(data);
	}

	LIST.printList();
	LIST.removeNode(55);
	LIST.printList();

	cout<<"length of the linked list : "<<LIST.getLength()<<'\n';
	LIST.deleteNode(34);
	LIST.deleteNode(1);
	LIST.printList();
	// cout<<endl;
	LIST.getMid();

return 0;
}
