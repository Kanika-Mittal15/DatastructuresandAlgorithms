#include <bits/stdc++.h>
using namespace std;

//Painter partition problem 
//using binary search same as allocating pages to the students
bool isFeasible(int arr[],int n,int k,int mid){
        int sum1=0;
        int painters=1;
        for(int i=0;i<n;i++){
                if(arr[i]>mid){
                        return false;
                }
                if(arr[i]+sum1>mid){
                        painters++;
                        sum1=arr[i];
                        if(painters>k){
                                return false;
                        }
                }
                else{
                        sum1+=arr[i];
                }
        }
        return true;
}

int painterpartition(int arr[],int n,int k){
        int total=0;
        sort(arr,arr+n);
        if(k>n){
                return -1;
        }
        for(int i=0;i<n;i++){
                total+=arr[i];
        }
        int low=0;int high=total;
        int result=INT_MAX;
        while(low<=high){
                int mid=(low+high)/2;
                if(isFeasible(arr,n,k,mid)){
                        result=min(result,mid);
                        high=mid-1;
                }
                else{
                        low=mid+1;
                }
        }
        return result;
}

int main() {
	int arr[]={10, 20, 60, 50, 30, 40};
	cout<<painterpartition(arr,6,3);
	return 0;
}
