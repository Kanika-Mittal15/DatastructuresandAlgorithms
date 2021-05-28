#include <bits/stdc++.h>
using namespace std;

//Heap Data Structure 
//Kth smallest element using max heap 

int main() {
	priority_queue<int>maxh;
	int arr[]={7,10,4,3,20,15};
	int k=3;
	for(int i=0;i<6;i++){
	        maxh.push(arr[i]);
	        if(maxh.size()>k){
	                maxh.pop();
	        }
	}
	cout<<maxh.top()<<endl;
	return 0;
}
