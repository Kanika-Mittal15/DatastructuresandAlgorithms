#include <bits/stdc++.h>
using namespace std;

//stock span problem using stack 

void stockspan(int arr[],int n){
        stack<int>s;
        int span[n];
        s.push(0);
        span[0]=1;
        cout<<span[0]<<" ";
        for(int i=1;i<n;i++){
                while(!s.empty() and arr[s.top()]<arr[i]){
                        s.pop();
                }
                span[i]=i-s.top();
                cout<<span[i]<<" ";
                s.push(i);
        }
}

int main() {
	// your code goes here
	int arr[]={100,80,60,70,60,75,85};
	stockspan(arr,7);
	return 0;
}
