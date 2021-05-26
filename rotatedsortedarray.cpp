#include <iostream>
using namespace std;

//number of times a sorted array is clockwise rotated 
int rotatedsortedarray(int arr[],int n){
        int low=0;int high=n-1;
        while(low<=high){
                int mid=low+((high-low)/2);
                if(arr[mid]>arr[mid+1]){
                        return n-(mid+1);
                }
                else if(arr[mid]>arr[high]){
                        low=mid+1;
                }
                else{
                        high=mid-1;
                }
        }
}

int main() {
	int arr[]={15,18,2,5,6,8,11,12};
	cout<<rotatedsortedarray(arr,8);
	return 0;
}
