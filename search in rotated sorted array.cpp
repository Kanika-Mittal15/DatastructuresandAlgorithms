#include <iostream>
using namespace std;

//search in rotated sorted array using binary search which takes O(logN)
int findIndex(int arr[],int n,int k){
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==k){
                        return mid;
                }
                else if(arr[low]<=arr[mid]){//left half is strictly increasing
                        if(k>=arr[low]&&k<=arr[mid]){
                                high=mid-1;//target present in the left half
                        }
                        else{
                                low=mid+1;//target present in the right half
                        }
                }
                else{//right half is strictly increasing
                        if(k<=arr[high]&&k>=arr[mid]){
                                low=mid+1;//target present in the right half
                        }
                        else{
                                high=mid-1;//target present in the left half
                        }
                }
        }
        return ans;
}

int main() {
	int arr[]={4,5,6,7,8,0,1,2,3};
	cout<<findIndex(arr,9,5);
	return 0;
}
