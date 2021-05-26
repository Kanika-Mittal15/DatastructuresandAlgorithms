#include <iostream>
using namespace std;

//are the 2 binary trees(or BST) identical?
//if it satisfies the three conition that are :
//1. root1->data should be equal to root2->data 
//2. left subtree should be identical
//3. right subtree should be identical

class node{
        public:
        int data;
        node* left;
        node* right;
        node(int val){
                data=val;
                left=NULL;
                right=NULL;
        }
};


bool binarytreesidentical(node* root1,node*root2){
        if(root1==NULL && root2==NULL){
                return true;
        }
        else if(root1==NULL || root2==NULL){
                return false;
        }
        else{
                bool cond1 = root1->data==root2->data;
                if(cond1==false){
                        return false;
                }
                bool cond2 = binarytreesidentical(root1->left,root2->left);
                if(cond2==false){
                        return false;
                }
                bool cond3 = binarytreesidentical(root1->right,root2->right);
                if(cond3==false){
                        return false;
                }
        if(cond1 and cond2 and cond3){
                return true;
        }
        else{
                return false;
        }
        }
        
}
int main() {
	node* root1 = new node(1);
        root1->left = new node(2);
        root1->right = new node(3);
        root1->left->left = new node(4);
        root1->left->right = new node(5);
        root1->left->left->left = new node(8);
        
        node* root2 = new node(1);
        root2->left = new node(2);
        root2->right = new node(3);
        root2->left->left = new node(4);
        root2->left->right = new node(5);
        root2->left->left->left = new node(8);
        
        if(binarytreesidentical(root1,root2)){
                cout<<"identical";
        }
        else{
                cout<<"not identical";
        }
        
	return 0;
}
