#include <bits/stdc++.h>
using namespace std;

//Largest Binary Search Tree

struct node{
        
        int data;
        node* left;
        node* right;
        node(int val){
                data=val;
                left=NULL;
                right=NULL;
        }
};

struct info{
        int size;
        int min;
        int max;
        int ans;
        bool isBst;
};

info largestBst(node* root){
        if(root==NULL){
                return {0,INT_MAX,INT_MIN,0,true};
        }
        if(root->left==NULL && root->right==NULL){
                return {1,root->data,root->data,1,true};
        }
        info leftInfo = largestBst(root->left);
        info rightInfo = largestBst(root->right);
        info curr;
        curr.size = (1+leftInfo.size+rightInfo.size);
        if(leftInfo.isBst && rightInfo.isBst && leftInfo.max < root->data && rightInfo.min > root->data){
                curr.min = min(leftInfo.min,min(rightInfo.min,root->data));
                curr.max = max(rightInfo.max,max(leftInfo.max,root->data));
                curr.ans = curr.size;
                curr.isBst=true;
                return curr;
        }
        curr.ans = max(leftInfo.ans,rightInfo.ans);
        curr.isBst=false;
        return curr;
}

int main() {
	node* root1 = new node(15);
        root1->left = new node(20);
        root1->right = new node(30);
        root1->left->left = new node(5);
        
        cout<<largestBst(root1).ans;
	return 0;
}
