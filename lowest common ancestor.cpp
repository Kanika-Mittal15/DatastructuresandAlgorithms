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
//lowest common ancestor 
node* lowestcommonancestor(node*root,int n1,int n2){
        if(root==NULL){
                return NULL;
        }
        if(root->data==n1 or root->data==n2){
                return root;
        }
        node* l=lowestcommonancestor(root->left,n1,n2);
        node* r=lowestcommonancestor(root->right,n1,n2);
        if(l and r) return root;//roots are in different subtrees
        if(l) return l;
        else return r;
}
int main() {
	node* root = new node(10);
        root->left = new node(2);
        root->left->left = new node(3);
        root->left->right = new node(5);
        root->right = new node(12);
        root->right->right = new node(5);
        root->right->right->left = new node(-6);
        if(lowestcommonancestor(root,-7,8)){
                cout<<"ancestor exists";
        }
        else{
                cout<<"doesnot exist";
        }
	return 0;
}
