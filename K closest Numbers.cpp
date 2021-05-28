#include <bits/stdc++.h>
using namespace std;

//K closest numbers to X using max heap 
//time complexity - O(nlogk);
int main() {
	priority_queue<pair<int,int>>maxh;
	int arr[]={6,5,3,2,8,10,9};
	int k=3;
	int x=7;
	for(int i=0;i<7;i++){
	        maxh.push({abs(arr[i]-x),arr[i]});//closest to x are those in which difference between x and elements is least 
	        if(maxh.size()>k){
	                maxh.pop();
	        }
	}
	while(maxh.size()!=0){
	        cout<<maxh.top().second<<" ";
	        maxh.pop();
	}
	return 0;
}
