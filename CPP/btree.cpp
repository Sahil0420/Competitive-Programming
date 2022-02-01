#include<iostream>
#include<vector>
#include<climits>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node( int val = 0){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }

};

class BinaryTree{
public:
    Node* root;
    BinaryTree(int val = INT_MIN ){
        this->root = new Node(val);
    }

    Node* getRoot(){
        return (this->root);
    }

    void insert(Node* Root, int val){
        if(this->root->data == INT_MIN){
            this->root->data = val;
            return;
        }else{
            if(Root->data < val ){
                if(Root->right!=NULL)
                    insert(Root->right , val);
                else
                    Root->right = new Node(val);
            }else if(Root->data > val){
                if(Root->left!=NULL)
                    insert(Root->left , val);
                else
                    Root->left = new Node(val);
            }
        }
    }

    void preOrderTraversal(Node* root){
        if(root == NULL ) return;
        cout<<root->data<<" . ";
        this->preOrderTraversal(root->left);
        this->preOrderTraversal(root->right);
    }

    void inOrderTraversal(Node* root){
        if(root == NULL ) return;
        this->inOrderTraversal(root->left);
        cout<<root->data<<" . ";
        this->inOrderTraversal(root->right);
    }

    void postOrderTraversal(Node* root){
        if(root == NULL) return;
        this->postOrderTraversal(root->left);
        this->postOrderTraversal(root->right);
        cout<<root->data<<" . ";
    }


};

int main(){
    #ifndef Online_Judge
        freopen("input.txt","r",stdin);    
        freopen("output.txt","w",stdout);    
    #endif
    cout<<"hello world\n";
    BinaryTree tree; 
    Node* root = tree.getRoot();
    cout<<"Enter the number of the elements you want to add in tree : ";
    int n;cin>>n;
    while(n--){
        int val;cin>>val;
        tree.insert( root, val );
    }
    tree.preOrderTraversal(root);
    cout<<"\n";
    tree.postOrderTraversal(root);
    cout<<"\n";
    tree.inOrderTraversal(root);
    cout<<"\n";
    return 0;
}