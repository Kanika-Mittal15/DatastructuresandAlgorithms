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

//height of the binary tree is the height of the root 
int height(node* root){
        if (root==NULL){
                return -1;//base case 
        }
        return max(height(root->left),height(root->right))+1;
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
	cout<<height(root);
	return 0;
}
