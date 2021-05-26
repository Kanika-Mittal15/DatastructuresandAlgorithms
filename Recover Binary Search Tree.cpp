#include <iostream>
using namespace std;

//recover binary tree i.e. 2 elements have been swapped ,we have to recover them 
class node{
        public:
        int data ;
        node* left;
        node* right;
        node(int val){
                data=val;
                left=NULL;
                right=NULL;
        }
};
void findElements(node*root,node*&previous,node*&firstPointer,node*&lastPointer){
        if(root==NULL){
                return;
        }
        findElements(root->left,previous,firstPointer,lastPointer);
        if(previous!=NULL){
                if(previous->data>root->data){
                        if(firstPointer==NULL){
                                firstPointer=previous;
                        }
                }
                lastPointer=root;
        }
        previous=root;
        findElements(root->right,previous,firstPointer,lastPointer);
}
void printInorder(node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
int main() {
	node* root=new node(5);
	root->left = new node(6);
	root->right=new node(2);
	root->left->left=new node(1);
	root->left->right=new node(3);
	//Intialsize 3 pointers the first and last ponter are the elements which have to be swapped 
	node* firstPointer=NULL;
        node* lastPointer=NULL;
        node* previous=NULL;//previous keeps the track of previous root 
        cout<<"before swapping: ";printInorder(root);
        cout<<endl;
	findElements(root,previous,firstPointer,lastPointer);
	//swapping the data of the two nodes 
	int x= firstPointer->data;
	firstPointer->data=lastPointer->data;
	lastPointer->data=x;
	cout<<"after swapping(recovered BST): ";printInorder(root);
	return 0;
}
