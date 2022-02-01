#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
// #include <pair>
using namespace std;

class Node{
public:
	int data;
	Node *next , *prev;
	Node(int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};

void append(Node *head , int data){
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new Node(data);
	temp->next->prev = temp;
}

void printDLL(Node *head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" <-> ";
		temp = temp->next;
	}

	cout<<"NULL\n";
}


vector<pair<int,int>> findPairsWithGivenSum(Node *head , int target){
	Node* temp = head;
	vector<pair<int,int>> ans;
	int n1 , n2;
	while( temp->next != NULL){
		n1 = temp->data;
		Node* temp2 = temp->next;
		while (temp2->next!=NULL){
			n2 = temp2->data;
			if (n1+n2==target){
				ans.push_back(make_pair(n1, n2));
			}
			temp2 =temp2->next;
		}
		temp = temp->next;
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	Node *head= new Node(1);
	append(head,2);
	append(head,4);
	append(head,5);
	append(head,6);
	append(head,8);
	append(head,9);
	printDLL(head);

	int target;cin>>target;
	cout<<"target is "<<target<<"\n";

	vector<pair<int, int >> ans = findPairsWithGivenSum(head,target);
	for(auto i : ans){
		cout<<"("<<i.first <<","<<i.second<<")";
	}

	return 0;
}
