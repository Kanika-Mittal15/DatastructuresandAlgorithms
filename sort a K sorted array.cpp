#include <bits/stdc++.h>
using namespace std;

//Sort a K sorted array using min heap 
//time complexity - O(nlogk)
int main() {
        priority_queue<int,vector<int>,greater<int>>minh;
        int arr[]={6,5,3,2,8,10,9};
        vector<int>v;
        int k=3;
        for(int i=0;i<7;i++){
                minh.push(arr[i]);
                if(minh.size()>k){
                        v.push_back(minh.top());
                        minh.pop();
                }
        }
        while(minh.size()!=0){
                v.push_back(minh.top());
                minh.pop();
        }
        cout<<"Sorted array: ";
        for(auto &it:v){
                cout<<it<<" "; 
        }
	return 0;
}
