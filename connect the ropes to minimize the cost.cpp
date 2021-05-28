#include <bits/stdc++.h>
using namespace std;

//connect ropes to minimize the cost using min heap 
//{
int main() {
	priority_queue<int,vector<int>,greater<int>>minh;
	int arr[]={1,2,3,4,5};
	for(int i=0;i<5;i++){
	        minh.push(arr[i]);
	}
	int sum =0;
	vector<int>v;
	while(minh.size()!=1){
	        int first = minh.top();
	        minh.pop();
	        int second = minh.top();
	        minh.pop();
	        minh.push(first+second);
	        v.push_back(sum+first+second);
	}
	int cost =0;
	for(int i=0;i<v.size();i++){
	        cost+=v[i];
	}
	cout<<"minimum cost to connect all the ropes is: "<<cost;
	return 0;
}
