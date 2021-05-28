#include <bits/stdc++.h>
using namespace std;

//Return K largest elements using min heap

int main() {
	priority_queue<int,vector<int>,greater<int>>minh;
	int arr[]={7,10,4,3,20,15};
	int k=3;
	for(int i=0;i<6;i++){
	        minh.push(arr[i]);
	        if(minh.size()>k){
	                minh.pop();
	        }
	}
	while(minh.size()!=0){
	        cout<<minh.top()<<" ";
	        minh.pop();
	}
	return 0;
}
