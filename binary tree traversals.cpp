#include <bits/stdc++.h>
using namespace std;

//Binary tree implementation
class node{
        public: 
        int data;
        node* left;
        node* right;
        node(int val){
                data= val;
                left = NULL;
                right=NULL;
        }
};
//o(n)-time complexity 
//o(n)-space complexity due to fuction call stack
//o(logn)-best/average case space complexity 
//Depth - first traversal includes preorder , postorder and inorder
//preorder traversal
void preorder(node* root){
        if(root==NULL){
                return;//base case
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
}
//inorder traversal 
void inorder(node* root){
        if(root==NULL){
                return ;//base case
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
}
//postorder traversal 
void postorder (node* root){
        if(root==NULL){
                return;//base case
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
        
}
//level order traversal 
void level(node* root){
        if(root==NULL){
                return;//base case
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty()){
                node* curr=q.front();
                cout<<curr->data<<" ";
                q.pop();//removing first element
                if(curr->left!=NULL){
                        q.push(curr->left);
                }
                if(curr->right!=NULL){
                        q.push(curr->right);
                }
        }
}
int main() {
	node* root = new node(1);
	root->left =new node(2);
	root->right=new node(3);
	root->left->left = new node(4);
	root->left->right=new node(5);
	root->right->left = new node(6);
	root->right->right=new node(7);
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	level(root);
	return 0;
}
