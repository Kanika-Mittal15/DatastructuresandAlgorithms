#include <bits/stdc++.h>
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

//to check whether the binary tree is a BST 
//optimized solution O(N) -time complexity 
//setting the limit to each node with min and max value
bool isBst(node* root,int minvalue,int maxvalue){
        if(root==NULL){
                return true;
        }
        if(root->data>minvalue&&
        root->data<maxvalue&&
        isBst(root->left,minvalue,root->data)&&
        isBst(root->right,root->data,maxvalue)){
                return true;
        }
        else return false;
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
int main() {
	node* root = NULL;
	root=insert(root,15);
	root=insert(root,10);
	root=insert(root,21);
	root=insert(root,8);
	root=insert(root,11);
	root=insert(root,17);
	root=insert(root,25);
	if(isBst(root,INT_MIN,INT_MAX)){
	        cout<<"yes"<<endl;
	}
	else{
	        cout<<"no"<<endl;
	}
	return 0;
}


