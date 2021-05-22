#include <bits/stdc++.h>
using namespace std;

//to find maximum minimum distance of k elements 
//first approach would be finding all subsets of the array and maximize the minimum distance but it will take very much time 
//second approach would be binary search 

bool isFeasible(int arr[],int mid,int n,int k){
        int pos=arr[0];int elements=1;
        for(int i=1;i<n;i++){
                if(arr[i]-pos>=mid){//checking difference between two consecutive elements that should be equal or greater than the mid 
                        pos=arr[i];
                        elements++;
                        if(elements==k){
                                return true;
                        }
                }
        }
        return false;
}

int largestMindistance(int arr[],int n,int k){
        sort(arr,arr+n);//binary serach is performed in sorted array 
        int left=1;int right=arr[n-1]-arr[0];//right is intialised as the maximum distance possible in an array and left is not intialised as arr[0]
        //because if we take 2 elements like{9,15} then the diff b/w them is 6 but if we take left as arr[0] then we will be forced to look in the range 9 to 15 which is not correct
        int result =-1;
        while(left<right){
                int mid=(left+right)/2;
                if(isFeasible(arr,mid,n,k)){
                        result=max(result,mid);
                        left=mid+1;//check for the right half 
                }
                else{
                        right=mid;//check for the left half 
                }
        }
        return result;
}

int main() {
	int arr[]={1,2,7,8,9};
	cout<<largestMindistance(arr,5,3);
	return 0;
}
