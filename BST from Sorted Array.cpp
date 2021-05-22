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

//create BST from sorted array 
node* createBst(int arr[],int start,int end){
         int mid=(start+end)/2;//the middle value will be the root 
         if(start>end){return NULL;}
         node* root=new node(arr[mid]);
         root->left=createBst(arr,start,mid-1);//left subtree
         root->right=createBst(arr,mid+1,end);//right subtree
         return root;
 }
 void preorder(node*root){
         if(root==NULL){
                 return ;
         }
         cout<<root->data<<" ";
         preorder(root->left);
         preorder(root->right);
 }
int main() {
	int arr[]={1,2,3,4,5,6,7};
	node* root=createBst(arr,0,6);
	preorder(root);
	return 0;
}
