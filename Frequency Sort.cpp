#include <bits/stdc++.h>
using namespace std;

//Frequency Sort using Max heap 

int main() {
	priority_queue<pair<int,int>>maxh;
	int arr[]={1,1,1,3,2,2,4};
	unordered_map<int,int>mp;
	unordered_map<int,int>::iterator itr;
	for(int i=0;i<7;i++){
	        mp[arr[i]]++;
	}
	for(itr=mp.begin();itr!=mp.end();itr++){
	        maxh.push({itr->second,itr->first});
	}
	while(maxh.size()!=0){
	        int freq=maxh.top().first;
	        int ele=maxh.top().second;
	        for(int i=0;i<freq;i++){
	                cout<<ele<<" ";
	        }
	        maxh.pop();
	}
	return 0;
}
