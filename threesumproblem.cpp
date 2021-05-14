#include <bits/stdc++.h>
using namespace std;

//three sum problem using two pointers
//O(N^2)-time complexity for and while loop
//O(1)-space complexity 
int threeSumProblem(int arr[],int n,int target){
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
                int low=i+1;
                int high=n-1;
                while(low<high){
                int current = arr[i]+arr[low]+arr[high];
                if(current<target){
                        low++;
                }
                else if(current>target){
                        high--;
                }
                else{
                        return 1;
                }
                }
        }
        return 0;
}

int main() {
	// your code goes here
	int arr[]={12,3,7,1,6,9};
	cout<<threeSumProblem(arr,6,16);
	return 0;
}
