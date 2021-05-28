#include <bits/stdc++.h>
using namespace std;

//Top K frequent Numbers using min heap 

int main() {
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
	int arr[]={1,1,1,3,2,2,4};
	int k = 2;
	unordered_map<int,int>mp;
	unordered_map<int,int>:: iterator itr;
	for(int i=0;i<7;i++){
	        mp[arr[i]]++;//map tells us the frequency of the elements 
	}
	for(itr=mp.begin();itr!=mp.end();itr++){//here key is the frequency 
	        minh.push({itr->second,itr->first});//in heap always the first element i sthe key basis on this key heap sorting is done 
	        if(minh.size()>k){
	                minh.pop();
	        }
	}
	while(minh.size()!=0){
	        cout<<minh.top().second<<" ";
	        minh.pop();
	}
	return 0;
}
