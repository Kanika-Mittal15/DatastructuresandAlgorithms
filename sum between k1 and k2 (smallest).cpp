#include <bits/stdc++.h>
using namespace std;

//Sum of elements with variations using heap 
//to find the sum of the elements between two kth smallest elements using max heap 

int ksmallest(int arr[],priority_queue<int>maxh,int k){
        for(int i=0;i<6;i++){
	        maxh.push(arr[i]);
	        if(maxh.size()>k){
	                maxh.pop();
	        }
        }
        return maxh.top();
}

int main() {
	priority_queue<int>maxh;
	int arr[]={1,3,12,5,15,11};
	int first = ksmallest(arr,maxh,3);
	int second = ksmallest(arr,maxh,6);
	int sum =0;
        for(int i=0;i<6;i++){
                if(arr[i]>first&&arr[i]<second){
                        sum+=arr[i];
                }
        }
        
	cout<<"sum between "<<first<<" and "<<second<<" smallest element is : "<<sum;
	return 0; 
}
