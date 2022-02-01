#include"bits/stdc++.h"
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

void print_list(Node* head){
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void insert_at_head(Node *&head , int val ){
	Node * new_node = new Node(val);
	new_node->next = head;
	head = new_node;
}

void append(Node *head , int val){
	Node* temp = head;
	while(temp->next != NULL ){
		temp=temp->next;
	}
	Node* new_node = new Node(val);
	temp->next = new_node;
}

void insert_after(Node * head , int val , int key ){
	Node * temp = head;
	int counter = 0 ;
	while( counter != key ){
		temp=temp->next;
		counter++;
	}
	Node* new_node = new Node(val);
	new_node->next = temp->next;
	temp->next = new_node; 
}

void reverse_print(Node* head){
	if(head == NULL)
		return;
	reverse_print(head->next);
	cout<<head->data<<"->";
}

void remove_duplicate(Node * head){
	Node *ptr1, *ptr2, *dup;
	ptr1=head;
	while(ptr1!=NULL && ptr1->next!=NULL){
		ptr2=ptr1;
		while(ptr2->next != NULL){
			if(ptr1->data == ptr2->next->data){
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete dup;
			}
			else{
				ptr2 = ptr2->next;
			}
		}
		ptr1=ptr1->next;
	}
}

void remove_duplicate_hashing(Node *head){
	Node *curr = head;
	Node *prev = NULL;
	unordered_set<int> seen;
	while(curr != NULL){
		if(seen.find(curr->data)!=seen.end()){
			prev->next = curr->next;
			delete curr;
		}else{
			seen.insert(curr->data);
			prev = curr;
		}
		curr = prev->next;
	}
}

void remove_node(Node* head , int val){
	Node * temp = head;
	while(temp->next->data!=val)
		temp=temp->next;
	
	Node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}


void pop(Node *head){
	Node *temp = head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	Node *todelete = temp->next;
	temp->next=NULL;
	delete todelete;
}

Node* findMid(Node *head){
	Node* fast = head->next;
	Node* slow = head;
	
	while((fast) and  (fast->next)){
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

Node* merge(Node* left , Node* right){
	if (left == NULL)
		return right;

	if(right == NULL)
		return left;

	Node* ans= new Node(-1);
	Node* temp = ans;

	while(left!=NULL and right!=NULL){
		if(left->data < right->data){
			temp->next=left;
			temp = left;
			left = left->next;
		}
		else{
			temp->next = right;
			temp = right;
			right= right->next;
		}
	}

	while(left!=NULL){
		temp->next=left;
		temp = left;
		left = left->next;
	}

	while(right!=NULL){
		temp->next = right;
		temp = right;
		right= right->next;
	}

	ans = ans->next;
	return ans;
}

Node* mergeSort(Node* head ){
	if(head == NULL or head->next == NULL ){
		return head;	
	}

	Node* mid = findMid(head);
	Node* left = head;
	Node* right = mid->next;
	mid->next = NULL;

	left = mergeSort(left);
	right = mergeSort(right);

	Node* result =  merge(left , right);

	return result;
}


int main(int argc, char const *argv[])
{


	Node *head = new Node(101);
	append(head,102);
	append(head,104);
	append(head ,103);
	append(head ,99);
	append(head ,95);
	append(head ,93);
	head=mergeSort(head);
	// cout<<findMid(head)->data;
	print_list(head);
	return 0;
}