#include<iostream>
#include<queue>
#include<stack>
#include<climits>
#include<vector>
#include<map>
//#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	Node* left;
	Node* right;
	int data;

	Node(int val=0){
		this->left = NULL;
		this->data = val;
		this->right = NULL;
	}
};

class binarySearchTree{
public:
	Node* root;
	binarySearchTree(int val=INT_MIN){
		this->root = new Node(val);
	}

	void insert(Node*root ,  int val ){
		if(root==NULL or root->data == INT_MIN){
			root->data = val;
			return;
		}

		if(val>root->data){
			if(root->right != NULL )
				this->insert(root->right , val);
			if(root->right == NULL ){
				root->right = new Node(val);
				return;
			}
		}
		else if(val<root->data){
			if(root->left != NULL)
				this->insert(root->left, val);
			if(root->left == NULL){
				root->left = new Node(val);
				return;
			}
		}else{
			return;
		}
	}

	void preOrderTraverse(Node* root){
		if(root==NULL)
			return;

		cout<<root->data<<" ";
		preOrderTraverse(root->left);
		preOrderTraverse(root->right);
	}

	void postOrderTraverse(Node* root){
		if(root==NULL)
			return;
		postOrderTraverse(root->left);
		postOrderTraverse(root->right);
		cout<<root->data<<" ";
	}

	void inOrderTraverse(Node* root){
		if(root == NULL)
			return;
		inOrderTraverse(root->left);
		cout<<root->data<<" ";
		inOrderTraverse(root->right);
	}

	Node* getRoot(){
		return (this->root);
	}

	int getRootData(){
		return this->root->data;
	}

	int getHeight(Node * root){
		if(root == NULL)
			return 0;

		int leftHeight = this->getHeight(root->left)+1;
		int rightHeight= this->getHeight(root->right)+1;

		int height=max(leftHeight, rightHeight);

		return height;
	}

	vector<int> preOrderIter(Node* Root){
		vector<int> pre;
		if(this->root == NULL or this->root->data <= INT_MIN) return pre;
		stack<Node*> st;
		st.push(Root);
		while(!st.empty()){
			Root = st.top();
			st.pop();
			pre.push_back(Root->data);
			if(Root->right != NULL)
				st.push(Root->right);
			if(Root->left!=NULL)
				st.push(Root->left);
		}
		return pre;
	}

	vector<int> inOrderIter(Node* Root){
		vector<int> inOrder;
		if(this->root == NULL or this->root->data <= INT_MIN) return inOrder;
		stack<Node* > st;
		Node* currNode = Root;
		while(true){
			if( currNode != NULL ){
				st.push(currNode);
				currNode = currNode->left;
			}else{
				if(st.empty() == true) break;
				currNode = st.top();
				st.pop();
				inOrder.push_back(currNode->data);
				currNode=currNode->right;
			}
		}
		return inOrder;
	}

	void printCurrentLevel(Node* Root , int level){
		if(level == 1){
			cout<<Root->data<<" ";
			return;
		}
		if(Root->left)
			printCurrentLevel(Root->left , level-1);
		if(Root->right)
			printCurrentLevel(Root->right ,level-1);
	}

	void levelOrderTraverse(Node* Root  , int level){
		for(int i=1;i<=level;i++){
			cout<<"LEVEL " << i <<" : ";
			printCurrentLevel(Root , i);
			cout<<"\n";
		}			
	}

	void leftViewUntil(Node* Root ,int level , vector<int> &maxlevel){
		if(Root!=NULL){
			if(level>maxlevel[0]){
				maxlevel[0] = level;
				cout<<Root->data<<" ";
			}
			leftViewUntil(Root->left , level + 1 , maxlevel);
			leftViewUntil(Root->right ,level + 1 , maxlevel);		
		}else{
			return;
		}
	}

	void leftView( Node* Root){
		vector<int> maxlevel = {0};
		cout<<"LEFT VIEW : ";
		leftViewUntil(Root,  1 , maxlevel);
		cout<<"\n";
	}

	void rightViewUntil(Node* Root , int level , int &maxlevel){
		if(Root!=NULL){
			if(level>maxlevel){
				maxlevel = level;
				cout<<Root->data<<" ";
			}
			rightViewUntil(Root->right, level+1,maxlevel);
			rightViewUntil(Root->left, level+1,maxlevel);
		}else{
			return;
		}
	}

	void rightView( Node* Root ){
		int maxlevel = 0;
		cout<<"RIGHT VIEW : ";
		rightViewUntil(Root ,1 , maxlevel);
		cout<<"\n";
	}

	vector<int> bottomView(Node* root){
		cout<<"\nBOTTOM VIEW : ";
		vector<int> ans;
		if(root == NULL)
			return ans ;
		map<int ,int> topNode;
		queue<pair<Node* , int >> q;
		q.push(make_pair(root , 0));

		while(!q.empty()){
			pair<Node* , int > temp = q.front();
			q.pop();
			Node* frontNode = temp.first;
			int hd = temp.second;
			topNode[hd] = frontNode->data;
			if(frontNode->left)
				q.push(make_pair(frontNode->left , hd-1));
			if(frontNode->right)
				q.push(make_pair(frontNode->right, hd+1));
		}
		for(auto i : topNode)
			ans.push_back(i.second);

		return ans;
	}

	vector<int> topView(Node* root){
		cout<<"\nTOP VIEW : ";
		vector<int> ans;
		if(root == NULL)
			return ans;
		map<int ,int > topNode;
		queue<pair<Node* , int >> q;
		q.push(make_pair(root,0));
		while(!q.empty()){
			pair<Node* , int > temp = q.front();
			q.pop();
			Node* frontNode = temp.first;
			int hd = temp.second;
			if(topNode.find(hd) == topNode.end())
				topNode[hd] = frontNode->data;
			if(frontNode->left)
				q.push(make_pair(frontNode->left , hd-1));
			if(frontNode->right)
				q.push(make_pair(frontNode->right , hd+1));
		}

		for(auto i : topNode)
			ans.push_back(i.second);

		return ans;
	}

	void leftTraverse(Node* root , vector<int> &ans){
		if(root==NULL || (root->left==NULL and root->right==NULL))
			return;

		ans.push_back(root->data);
		if(root->left)
			this->leftTraverse(root->left , ans);
		else
			this->leftTraverse(root->right , ans );

	}

	void rightTraverse(Node* root , vector<int> &ans ){
		if(root==NULL or (root->right==NULL and root->left == NULL))
			return;
		ans.push_back(root->data);
		if(root->right)
			this->rightTraverse(root->right,ans);
		else
			this->rightTraverse(root->left,ans);
	}

	void leafTraverse(Node* root , vector<int> &ans){
		if(root == NULL)
			return;
		if ((root->left == NULL) and (root->right == NULL))
			ans.push_back(root->data);
		this->leafTraverse(root->left , ans);
		this->leafTraverse(root->right , ans);

	}


	vector<int> boundaryTraverse(Node* root){
		cout<<"\nBOUNDARY TRAVERSAL : ";
		vector<int> ans ;
		if(root == NULL)
			return ans;
		ans.push_back(root->data);
		this->leftTraverse(root->left,ans);
		this->leafTraverse(root->left,ans);
		this->leafTraverse(root->right , ans);
		this->rightTraverse(root->right , ans);

		return ans;
	}

	Node* lca(Node* root , int n1 , int n2){
		if(root==NULL)
			return NULL;
		if(root->data == n1 or root->data == n2)
			return root;

		Node* leftAns = this->lca(root->left , n1 , n2);
		Node* rightAns = this->lca(root->right , n1 , n2);


		if(leftAns!=NULL and rightAns!=NULL)
			return root;
		else if(leftAns==NULL and rightAns!=NULL)
			return rightAns;
		else if(leftAns!=NULL and rightAns==NULL)
			return leftAns;
		else
			return NULL;
	}

	int getLca(Node* root , int n1 ,int n2 ){
		return this->lca(root , n1 , n2 )->data;
	}

};

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif

	binarySearchTree tree;
	Node* root = tree.getRoot();
	int n;cin>>n;
	while(n--){
		int a;cin>>a;
		tree.insert(root , a);
	}

	cout<<"\nPreorder traversal of the tree : ";
	tree.preOrderTraverse(tree.getRoot());
	cout<<"\nHeight of the tree : "<<tree.getHeight(tree.getRoot());
	cout<<endl;
	vector<int> pre = tree.preOrderIter(root);
	for(auto i : pre)
		cout<<i<<" ";

	cout<<endl;
	for(auto i : tree.inOrderIter(tree.getRoot()))
		cout<<i<<" ";

	cout<<endl;
	tree.inOrderTraverse(root);

	cout<<endl;
	tree.postOrderTraverse(root);

	cout<<"LEVEL ORDER : ";
	tree.levelOrderTraverse(root ,3);

	tree.leftView(root);
	tree.rightView(root);

	for(int i : tree.bottomView(root))
		cout<<i<<" ";

	for(int i : tree.topView(root))
		cout<<i<<" ";

	for(int i : tree.boundaryTraverse(root))
		cout<<i<<" ";

	cout<<"\nLOWEST COMMON ANCESTOR OF TWO NODES\t:\t "<<tree.getLca(root, 275 , 220);

	

	return 0;
}

/*
12
90 200 85 91 150 250 80 120 170 220 275 70
*/