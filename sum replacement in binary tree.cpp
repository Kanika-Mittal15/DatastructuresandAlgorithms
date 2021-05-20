#include <iostream>
using namespace std;

class node{
        public:
        int data;
        node* left;
        node* right;
        node(int val){
                data =val;
                left=NULL;
                right=NULL;
        }
};

//replacing each node with the sum in a binary tree 
//O(N)- time complexity 
//O(N)-space complexity due to call stack
void sumreplace(node*root){
        if(root==NULL){
                return ;
        }
        sumreplace(root->left);
        sumreplace(root->right);
        if(root->left!=NULL){
               root->data+=root->left->data;
        }
        if(root->right!=NULL){
                root->data+=root->right->data;
        }
}

node* insert(node* root,int val){
        if(root==NULL){
                root = new node(val);
        }
        else if(val<=root->data){
                root->left=insert(root->left,val);
        }
        else{
                //val>root->data
                root->right=insert(root->right,val);
        }
        return root;
}
void preorder(node* root){
        if(root==NULL){
                return ;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
}
int main() {
	node* root = NULL;
	root=insert(root,15);
	root=insert(root,10);
	root=insert(root,21);
	root=insert(root,8);
	root=insert(root,11);
	root=insert(root,17);
	root=insert(root,25);
	preorder(root);
	cout<<endl;
	sumreplace(root);
	preorder(root);
	return 0;
}