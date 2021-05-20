#include <iostream>
#include <stack>
using namespace std;

class node{
        public:
        char data;
        node* left;
        node* right;
        node(char val){
                data =val;
                left=NULL;
                right=NULL;
        }
};
//flatten binary tree i.e. converting into linked list left should be null and right should point to next node 
//first approach - recursion 
//time complexity - O(N) space complexity-O(n)due to call stack 
node* previous=NULL;
void flattenbinarytree(node* root){
        if(root==NULL){
                return;//base case
        }
        flattenbinarytree(root->right);
        flattenbinarytree(root->left);
        root->right=previous;
        root->left=NULL;
        previous=root;
}
//second approach - using stack 
//time complexity - O(N) space complexity -O(N)
void flatten_stack(node* root){
        stack<node*>s;
        s.push(root);
        while(!s.empty()){
                node* curr=s.top();
                s.pop();
                if(curr->right!=NULL){
                        s.push(curr->right);
                }
                if(curr->left!=NULL){
                        s.push(curr->left);
                }
                if(!s.empty()){
                        curr->right=s.top();
                        curr->left=NULL;
                }
        }
}
//Third approach - using morris order traversal 
//time complexity - O(N) space complexity -O(1) ;  the most efficient one 
void flatten_morris(node*root){
        node* curr=root;
        while(curr!=NULL){
                if(curr->left!=NULL){
                        node* previous =curr->left;
                        while(previous->right){
                                previous=previous->right;
                        }
                        previous->right=curr->right;
                        curr->right=curr->left;
                        curr->left=NULL;
                }
                curr=curr->right;
        }
}
//postorder
void postorder(node* root){
        if(root==NULL){
                return ;
        }
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
        
}
int main() {
        node* root = new node('A');
        root->left = new node('B');
        root->left->left = new node('C');
        root->left->right = new node('D');
        root->right = new node('E');
        root->right->right = new node('F');
        root->right->right->left = new node('G');
        postorder(root);
        cout<<endl;
        node* previous=NULL;
        flattenbinarytree(root);
        cout<<"Flatten binary tree using recursion: ";postorder(root);cout<<endl;
        flatten_stack(root);
        cout<<"Flatten binary tree using stack: ";postorder(root);cout<<endl;
        flatten_morris(root);
        cout<<"Flatten binary tree using morris: ";postorder(root);cout<<endl;
	return 0;
}
