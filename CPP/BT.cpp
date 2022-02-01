#include<iostream>
#include<queue>
#include<vector>
#include<map>
//#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node*left;
	Node*right;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL; 
	}

	Node(){
		data = -10e7;
		left = NULL;
		right = NULL;
	}
};

void addNode(Node*root , int val){
	if (root== NULL or root->data <=-10e7)
		root->data = val;
	if(root->data > val){
		if (root->left == NULL){
			root->left = new Node(val);
		}else{
			addNode(root->left,val);
		}
	}else if (root->data<val){
		if (root->right == NULL){
			root->right = new Node(val);
		}else{
			addNode(root->right , val);
		}
	}
}

void inOrderTraverse(Node* root){
	if (root==NULL)
		return;
	inOrderTraverse(root->left);
	cout<<root->data<<" ";
	inOrderTraverse(root->right);
}

void preOrderTraverse(Node* root){
	if (root==NULL) return;
	cout<<root->data<<" ";
	preOrderTraverse(root->left);
	preOrderTraverse(root->right);
}

void postOrderTraverse(Node* root ){
	if (root==NULL) return;
	postOrderTraverse(root->left);
	postOrderTraverse(root->right);
	cout<<root->data<<" ";
}

int height(Node* root ){
	if(root==NULL){
		return 0;
	}
	int left = height(root->left);
	int right = height(root->right);
	return max(left , right)+1;
}

void printCurrentLevel(Node* root , int level){
	if (root==NULL){
		return;
}
	if (level==1){
		cout<<root->data<<" ";
	}
	else{
		printCurrentLevel(root->left , level-1);
		printCurrentLevel(root->right , level-1);
	}
}

void levelOrderTraverse(Node* root){
	int h = height(root);
	for(int i=0;i<h;i++){
		cout<<"Level"<<i+1<<" : ";
		printCurrentLevel(root ,i+1);
		cout<<"\n";
	}
}


void leftViewUntil(Node* root , int level , vector<int> &maxlevel){
	if (root!=NULL){
		if ( maxlevel[0] < level){
			maxlevel[0]=level;
			cout<<root->data<<" ";
		}
		leftViewUntil(root->left , level+1, maxlevel);
		leftViewUntil(root->right , level+1, maxlevel);
	}else{
		return;
	}
} 

void leftView( Node* root ){
	vector< int > maxlevel = {0};
	cout<<"Left View : ";
	leftViewUntil(root , 1 , maxlevel);
	cout<<"\n";
}

void rightViewUntil(Node* root , int level , vector<int> &maxlevel){
	if (root != NULL){
		if ( maxlevel[0] < level){
			maxlevel[0] = level;
			cout<<root->data<<" ";
		}

		rightViewUntil(root->right , level+1 , maxlevel);	
		rightViewUntil(root->left , level+1, maxlevel);
	}else{
		return ; 
	}
}

void rightView( Node* root ){
	vector<int> maxlevel = {0};
	cout<<"Right View : ";
	rightViewUntil(root , 1 , maxlevel);
	cout<<"\n";
}

vector<int> leftTraverse(Node* root , vector<int> &ans){
	if ((root == NULL) || (root->left==NULL && root->right==NULL)){
		return ans;
	}
	ans.push_back(root->data);
	if (root->left){
		leftTraverse(root->left ,ans );
	}
	else {
		leftTraverse(root->right , ans );
	}
	return ans;
}

void rightTraverse(Node* root , vector<int> &ans){
	if ((root == NULL) or (root->left==NULL and root->right==NULL)){
		return ;
	}
	ans.push_back(root->data);
	if (root->right){
		rightTraverse(root->right, ans );
	}
	else{
		rightTraverse(root->left,ans );
	}
}

void leafTraverse(Node* root , vector<int> &ans){
 	if(root==NULL){
 		return;
 	}

 	if(root->left==NULL and root->right==NULL){
 		ans.push_back(root->data);
 	}

 	leafTraverse(root->left, ans );
 	leafTraverse(root->right, ans );
}

vector<int> boundaryTraverse(Node* root){
	cout<<"Boundary Traversal : ";
	vector<int > ans;
	if (root==NULL)
		return ans ;
	cout<<root->data<<" ";
	leftTraverse(root->left,ans);
	leafTraverse(root->left,ans);
	leafTraverse(root->right,ans);
	rightTraverse(root->right,ans);
	return ans;
}

void getVerticalOrder(Node* root , int h ,map<int, vector<int>> &m){
	if (root == NULL)
		return ;
	m[h].push_back(root->data);
	if(root->left)
		getVerticalOrder(root->left,h-1, m);
	if (root->right)
		getVerticalOrder(root->right , h+1 , m );
}

void printVertcicalOrder(Node* root){
	map<int , vector<int>> m ; 
	int h = 0 ;
	getVerticalOrder(root , h , m );
	map<int , vector<int>> :: iterator itr;
	for(itr = m.begin() ; itr!=m.end() ; itr++){
		cout<<itr->first<<" : ";
		for (auto i : itr->second)
			cout<<i<<" ";
		cout<<"\n";
	}
}

vector<int> verticalOrderIter(Node* root){
	map<int , map<int , vector<int > > >  nodes;

	queue<pair<Node* , pair<int, int >>> q;
	vector<int> ans;

	q.push(make_pair(root,make_pair(0,0)));

	while(!q.empty()){
		pair<Node*, pair<int ,int >> temp = q.front();
		q.pop();
		Node* frontNode = temp.first;
		int hd = temp.second.first;
		int lvl = temp.second.second;

		nodes[hd][lvl].push_back(frontNode->data);

		if(frontNode->left)
			q.push(make_pair(frontNode->left , make_pair(hd-1,lvl+1) ) );
		if (frontNode->right)
			q.push(make_pair(frontNode->right , make_pair(hd+1 , lvl+1) ) );
	}

	for(auto i : nodes){
		for(auto j : i.second){
			for (auto k : j.second){
				ans.push_back(k);
			}
		}
	}
	return ans;
}

vector<int> topView(Node* root){
	cout<<"TOP VIEW : ";
	vector<int> ans;
	if (root == NULL)
		return ans;

	map<int  , int > topNode;
	queue<pair<Node* , int>> q;
	q.push(make_pair(root,0));

	while(!q.empty()){
		pair<Node* , int> temp = q.front();
		q.pop();
		Node* frontNode = temp.first;
		int hd = temp.second; 

		if(topNode.find(hd) == topNode.end())
			topNode[hd]=frontNode->data;

		if(frontNode->left)
			q.push(make_pair(frontNode->left , hd-1));
		if (frontNode->right)
			q.push(make_pair(frontNode->right , hd+1));
	}

	for( auto i : topNode)
		ans.push_back(i.second);

	return ans;
}

vector<int> bottomView(Node* root ){
	cout<<"BOTTOM VIEW  : ";
	vector<int> ans;
	if(root==NULL)
		return ans;
	map<int, int> topNode;
	queue<pair<Node* , int>> q;
	q.push(make_pair(root,0));
	while(!q.empty()){
		pair<Node* , int> temp = q.front();
		q.pop();
		Node* frontNode = temp.first;
		int hd = temp.second;

		topNode[hd] = frontNode->data;
		if ( frontNode->left ) q.push(make_pair(frontNode->left , hd-1));
		if ( frontNode->right ) q.push(make_pair(frontNode->right , hd+1));

	}
	for(auto i : topNode)
		ans.push_back(i.second);

	return ans;
}

vector<int> zigzagTraversal(Node* root){
	vector<int> ans;
	if (root==NULL)
		return ans;

	queue<Node*>q ;
	q.push(root);
	bool leftToRight = true;
	cout<<"ZIGZAG TRAVERSAL : ";
	while(!q.empty()){
		int size = q.size();
		vector<int> temp(size);

		for(int i=0;i<size;i++){

			Node* frontNode = q.front();
			q.pop();

			int index = leftToRight ? i : size - i - 1;
			temp[index] = frontNode->data;

			if (frontNode->left)
				q.push(frontNode->left);

			if (frontNode->right)
				q.push(frontNode->right);
		}
		leftToRight = !leftToRight;
	for ( auto i : temp )
		ans.push_back(i);
	}
	return ans;
}

void sumSolve(Node* root, int sum , int &maxSum , int len , int &maxLen){
	if (root == NULL){
		if(len > maxLen){
			maxLen = len;
			maxSum = sum;
		}
		else if (len == maxLen){
			maxSum = max(sum,maxSum);
		}
		return;
	}

	sum = sum + root->data;

	sumSolve(root->left , sum , maxSum , len+1, maxLen);
	sumSolve(root->right , sum , maxSum , len+1, maxLen);

}

int sumOfLongRootToLeafPath(Node* root){
	int len = 0;
	int maxLen = 0;

	int sum=0;
	int maxSum =-10e7 ;

	sumSolve(root,sum,maxSum,len,maxLen);

	return maxSum;

}

Node* lca(Node* root , int n1 , int n2){
	//LCA = Lowest Common Ancestor 
	if (root == NULL)
		return NULL;

	if( root->data == n1 or root->data == n2 ){
		return root;
	}	

	Node* leftAns = lca(root->left,n1,n2);
	Node* rightAns = lca(root->right,n1,n2);

	if(leftAns!=NULL and rightAns!=NULL)
		return root;
	else if (leftAns!=NULL and rightAns == NULL)
		return leftAns;
	else if ( leftAns == NULL and rightAns != NULL)
		return rightAns;
	else
		return NULL;
}

void solveSumK( Node* root , int k , int &count , vector<int> path ){
	if(root==NULL){
		return ;
	}

	path.push_back(root->data);
	solveSumK(root->left , k , count , path);
	solveSumK(root->right , k , count , path);
}

// int sumK(Node *root ,int sum ){
// 	//this function will return the number of paths which will have the sum equal to the given sum;
// 	vector<int> path;
// 	int count=0;
// 	solveSumK(root , k , count, path);
// 	return count;
// }

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	Node* root = new Node();

	int n;cin>>n;cout<<n<<"\n";
	while( n-- ){
		int val;cin>>val;
		addNode(root,val);
	}

	preOrderTraverse(root);
	cout<<"\n";
	postOrderTraverse(root);
	cout<<"\n";
	inOrderTraverse(root);
	cout<<"\n";
	cout<<"Height Of the Tree : "<<height(root)<<"\n\n";
	levelOrderTraverse(root);

	leftView(root);
	rightView(root);

	for(auto i : boundaryTraverse(root))
		cout<<i<<" ";
	cout<<"\n";

	// cout<<"It 's  an hashmap\n";
	// map<int , vector<int>> m;
	// vector<int> v = {32,43,5,32,4424};
	// m.insert(pair(1,v));

	// for (auto i : m){
	// 	cout << i.first<<" : ";
	// 	for (auto p : i.second){
	// 		cout<<p<<" ";
	// 	}
	// 	cout<<"\n";
	// }

	printVertcicalOrder(root);
	vector<int> p = verticalOrderIter(root);
	for ( auto u : p )
		cout<<u<<" ";
	cout<<endl;

	p.clear();
	p = topView(root);
	for ( auto i : p )
		cout<<i<<" ";
	cout<<"\n";

	p.clear();
	p = bottomView(root);
	for(auto i : p)
		cout<<i<<" ";
	cout<<"\n";

	p.clear();
	p = zigzagTraversal(root);
	for (auto i : p)
		cout<<i<<" ";
	cout<<"\n";
	cout<<"Longest path sum from root to leaf in tree : "<<sumOfLongRootToLeafPath(root);

	cout<<"\nLowest common ancestor of 23 and 140 is "<<lca(root , 23 , 140)->data;
	return 0;
}



/*
input case ;  
100 134 34 65 23 56 57 132 133 135 140
*/