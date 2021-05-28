#include <bits/stdc++.h>
using namespace std;

//K closest points to origin using max heap 

int main() {
	priority_queue<pair<int,pair<int,int>>>maxh;
	int arr[4][2]={{1,3},{-2,2},{5,8},{0,1}};//2d array 
	int k=2;
	for(int i=0;i<4;i++){
	        maxh.push({(arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1]),{arr[i][0],arr[i][1]}});
	        if(maxh.size()>k){
	                maxh.pop();
	        }
	}
	while(maxh.size()!=0){
	        pair<int,int> p=maxh.top().second;
	        cout<<p.first<<" "<<p.second<<endl;
	        maxh.pop();
	}
	return 0;
}
