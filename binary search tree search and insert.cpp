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
//Binary Search tree 
//we use them to save time as its time complexity is O(logn)
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
//searching in BST 
//O(logN)-time complexity 
bool searchinbst(node*root,int val){
        if(root==NULL){
                return false;
        }
        if(root->data==val){
                return true;
        }
        if(val<root->data){
                searchinbst(root->left,val);
        }
        else{
                searchinbst(root->right,val);
        }
}


//inorder traversal
void inorder(node* root){
        if(root==NULL){
                return;//base case
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
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
	inorder(root);
	cout<<endl;
	if(searchinbst(root,25)){
	        cout<<"found"<<endl;
	}
	else{
	        cout<<"not found"<<endl;
	}
	return 0;
}
