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

//shortest distance between two nodes using lowest common ancestor adding up the distance of the two nodes from the given nodes 
node* lowestcommonancestor(node*root,int n1,int n2){
        if(root==NULL){
                return NULL;
        }
        if(root->data==n1 or root->data==n2){
                return root;
        }
         node* l=lowestcommonancestor(root->left,n1,n2);
        node* r=lowestcommonancestor(root->right,n1,n2);
        if(l and r) return root;
        if(l) return l;
        else return r;
}

int finddisatnce(node*root,int k,int dist){
        if(root==NULL){
                return -1;
        }
        if(root->data==k){
                return dist;
        }
        int left = finddisatnce(root->left,k,dist+1);
        if(left!=-1){
                return left;
        }
        return finddisatnce(root->right,k,dist+1);
}
int distance(node*root,int n1,int n2){
        node*lca=lowestcommonancestor(root,n1,n2);
        int d1=finddisatnce(lca,n1,0);
        int d2=finddisatnce(lca,n2,0);
        return d1+d2;
}
int main() {
	node* root = new node(10);
        root->left = new node(2);
        root->left->left = new node(3);
        root->left->right = new node(5);
        root->right = new node(12);
        root->right->right = new node(8);
        root->right->right->left = new node(-6);
        cout<<distance(root,5,10);
	return 0;
}
