#include <iostream>
using namespace std;

//peak element by binary search 

int peakelement(int arr[],int n){
        int low=0;int high=n-1;
        while(low<=high){
                int mid=(low+high)/2;
                if(mid==0){//if mid is at index 0 then we have to check its right only as left doesnot exists 
                        if(arr[mid]>arr[mid+1]){
                                return mid;//return index 0
                        }
                        else{
                                return mid+1;//return index 1
                        }
                }
                else if(mid==n-1){//if mid is last index then we have to compare it with second last index only as right to it doesnot exist
                        if(arr[mid]>arr[mid-1]){
                                return mid;//return n-1
                        }
                        else{
                                return mid-1;//return n-2
                        }
                }
                else if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){//if mid is greater than its right as well as left then its a peak 
                        return mid;
                }
                else if(arr[mid]>arr[mid-1]){//more promising is right side as right element in array is greater than mid element
                        low=mid+1;
                }
                else{
                        high=mid-1;//to check on the left part 
                }
        }
        
}

int main() {
	int arr[]={1,2,3,1};
	cout<<peakelement(arr,4);
	return 0;
}
