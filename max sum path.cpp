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

//max sum path in a binary tree 
//there will be three cases which should be taken into consideration 
//first case when current root will be the root 
//second case when current root will be in the path of the max sum path 
//third case when current root is not included in the max sum path 
int maxsumpathUtil(node* root,int &res){
        if(root==NULL){
                return 0;
        }
        int l = maxsumpathUtil(root->left,res);
        int r = maxsumpathUtil(root->right,res);
        int max_single=max(max(l,r)+root->data,root->data);
        int max_second=max(max_single,l+r+root->data);
        res=max(max_second,res);
        return max_single;
}
int maxsumpath(node*root){
        int res=INT_MIN;
        maxsumpathUtil(root,res);
        return res;
}
int main() {
        node* root = new node(10);
        root->left = new node(2);
        root->left->left = new node(3);
        root->left->right = new node(5);
        root->right = new node(12);
        root->right->right = new node(5);
        root->right->right->left = new node(-6);
	cout<<maxsumpath(root)<<endl;
	return 0;
}
