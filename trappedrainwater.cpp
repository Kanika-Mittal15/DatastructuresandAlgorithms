#include <bits/stdc++.h>
using namespace std;
//trapping rainwater
//O(N)-time complexity with O(N)-space complexity
int trappedRainWater(vector<int>& rain){
        int n= rain.size();
        vector<int>left(n),right(n);
        if(n<=2){
                return 0;
        }
        //for the left boundary 
        int leftMax=rain[0];
        left[0]=0;
        for(int i=1;i<n;i++){
                left[i]=leftMax;
                leftMax=max(rain[i],leftMax);
        }
        //for the right boundary
        right[n-1]=0;
        int rightMax=rain[n-1];
        for(int i=n-1;i>=0;i--){
                right[i]=rightMax;
                rightMax=max(rain[i],rightMax);
        }
        //trapped water 
        int trappedwater =0;
        for(int i=0;i<n;i++){
                if(rain[i]<left[i] and rain[i]<right[i]){
                        trappedwater+=min(left[i],right[i])-rain[i];
                }
        }
        return trappedwater;
}


int main() {
	// your code goes here
	vector<int>rain;
	rain.push_back(4);
	rain.push_back(2);
	rain.push_back(5);
	rain.push_back(1);
	rain.push_back(3);
	cout<<trappedRainWater(rain);
	return 0;
}
