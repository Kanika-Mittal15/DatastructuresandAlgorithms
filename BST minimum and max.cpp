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
//inserting values in BST
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
//to find minimum no. in BST 
//there are two ways in which this can be done 
//by iteration 
int findmin(node* root){
        if(root==NULL){
                return -1;
        }
        while(root->left!=NULL){
                root=root->left;
        }
        return root->data;
}
//by recursion 
int findMin(node* root){
        if(root==NULL){
                return -1;
        }
        else if(root->left==NULL){
                return root->data;
        }
        else{
                return findMin(root->left);
        }
}
//to find maximum in BST 
int findMax(node* root){
        if(root==NULL){
                return -1;
        }
        else if(root->right==NULL){
                return root->data;
        }
        else{
                return findMax(root->right);
        }
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
	cout<<findmin(root);
	cout<<endl;
	cout<<findMin(root)<<endl;
	cout<<findMax(root)<<endl;
	return 0;
}
