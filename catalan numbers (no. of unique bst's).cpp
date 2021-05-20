#include <iostream>
using namespace std;

//catalan numbers application to find the no. of unique BST's 
//first approach - recursive 
//time complexity - exponential 

unsigned long int catalan(unsigned int n){
        if(n<=1){
                return 1;//base case
        }
        unsigned long int res=0;
        for(int i=0;i<n;i++){
                res+=catalan(i)*catalan(n-i-1);
        }
        return res;
}
//second approach - using dynamic programming 
//time complexity - O(N^2)
unsigned long int catalanDp(unsigned int n){
        unsigned long int catalan[n+1];//for storing previous results 
        catalan[0]=1;catalan[1]=1;
        for(int i=2;i<=n;i++){
                catalan[i]=0;
                for(int j=0;j<i;j++){
                        catalan[i]+=catalan[j]*catalan[i-j-1];
                }
        }
        return catalan[n];
}
//third approach - binomial coefficient the most efficienyt approach one 
//time complexity - O(N) 
//catalan numbers can be found by uing a formula i.e 2nCn/n+1 
unsigned long int catalanbinomial(unsigned int n,unsigned int k){
        if(k>n-k){
                k=n-k;//using property nCk=nCn-k
        }
        unsigned long int res=1;
        //calculating the formula 2nCn
        for(int i=0;i<k;i++){
                res*=(n-i);
                res/=(i+1);
        }
        return res;
}
unsigned long int catalanbicoeff(unsigned int n){
        if(n<=1){
                return 1;
        }
        unsigned long int c = catalanbinomial(2*n,n);
        return c/(n+1);//2nCn/n+1 
}
int main() {
	for(int i=0;i<10;i++){
	        cout<<catalan(i)<<" ";
	}cout<<endl;
	for(int i=0;i<10;i++){
	        cout<<catalanDp(i)<<" ";
	}cout<<endl;
	for(int i=0;i<10;i++){
	        cout<<catalanbicoeff(i)<<" ";
	}cout<<endl;
	return 0;
}
