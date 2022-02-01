#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

void addNode(Node* root , int val){
	if (root == NULL){
		return;
	}
	else if(root!=NULL){
		if (root->data > val){
			if (root->left == NULL){
				root->left = new Node(val);
			}else{
				addNode(root->left,val);
			}
		}
		else if(root->data<val){
			if(root->right==NULL){
				root->right = new Node(val);
			}else{
				addNode(root->right,val);
			}
		}
	}
}

void inOrder(Node* root){
	if (root==NULL)
		return 
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
		Node* root = new Node(100);
		
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			addNode(root,a);
		}

		cout<<root->data;
		inOrder(root);

	return 0;
}
