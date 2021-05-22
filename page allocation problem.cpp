#include <bits/stdc++.h>
using namespace std;

//allocating books to given number of students 

bool allocation(int arr[],int mid,int n,int k){
        int students=1;
        int sum1=0;
        for(int i=0;i<n;i++){
                if(arr[i]>mid){
                        return false;
                }
                if(sum1+arr[i]>mid){
                        students++;
                        sum1=arr[i];//sum becomes the nexr element in array and will proceed from here 
                        if(students>k){//if no. of students exceed then return false
                        return false;
                        }
                }
                else{
                        sum1+=arr[i];
                }
        }
        return true;
        
}

int allocatepages(int arr[],int n,int k){
        if(k>n){
                return -1;//if no. of students exceed the no. of books then books can't be allocated to the students
        }
        sort(arr,arr+n);
        int total=0;
        for(int i=0;i<n;i++){
                total+=arr[i];
        }
        int left=0;
        int right=total;
        int result=INT_MAX;
        while(left<=right){
                int mid=(left+right)/2;
                if(allocation(arr,mid,n,k)){
                        result=min(result,mid);//returning min of max no. of pages
                        right=mid-1;//check in the left part so that more minimum could be found
                }
                else{
                        left=mid+1;//check in the right part 
                }
        }
        return result;
}

int main() {
	int arr[]={20,30,10,40};
	cout<<allocatepages(arr,4,2);
	return 0;
}
