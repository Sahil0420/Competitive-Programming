#include<iostream>
#include<climits>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int val=INT_MIN){
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};

class BinaryTree{
public:
	Node* root = NULL;

	Node* getRoot(){
		return this->root;
	}

	void insert(Node* &Root , int val){
	}

	void preOrder(Node* &Root){
		if(Root == NULL){
			return;
		}
		cout<<Root->data<<" ";
		this->preOrder(Root->left);
		this->preOrder(Root->right);
	}

	void postOrder(Node* &Root){
		if(Root == NULL){
			return;
		}
		this->postOrder(Root->left);
		this->postOrder(Root->right);
		cout<<Root->data<<" ";
	}

	void inOrder(Node* &Root){
		if(Root == NULL){
			return;
		}
		this->inOrder(Root->left);
		cout<<Root->data<<" ";
		this->inOrder(Root->right);
	}
};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	char end = '\n';

	BinaryTree tree;

	Node* Root = tree.getRoot();

	Root = new Node(11);
	Root->left = new Node(6);
	Root->right = new Node(19);
	Root->left->left = new Node(104);
	Root->left->right = new Node(105);
	Root->right->left = new Node(106);
	Root->right->right = new Node(107);

	tree.preOrder(Root);
	cout<<end;
	tree.postOrder(Root);
	cout<<end;
	tree.inOrder(Root);

	return 0;
}