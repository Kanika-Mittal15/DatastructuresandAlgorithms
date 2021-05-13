#include <bits/stdc++.h>
using namespace std;

//largest rectangle window 
int largestRectangleWindow(vector<int>& heights){
        int n=heights.size();
        vector<int>left(n),right(n);
        stack<int>s;
        //for the left boundary
        for(int i=0;i<n;i++){
                if(s.empty()){
                s.push(i);left[i]=0;}
                else{
                        while(!s.empty()and heights[s.top()]>=heights[i]){
                                s.pop();
                        }
                        left[i]=s.empty()?0:s.top()+1;
                        s.push(i);
                }
        }
        while(!s.empty()){
                s.pop();//clear stack
        }
        //for the right boundary
        for(int i=n-1;i>=0;i--){
                if(s.empty()){
                s.push(i);right[i]=n-1;}
                else{
                        while(!s.empty()and heights[s.top()]>=heights[i]){
                                s.pop();
                        }
                        right[i]=s.empty()?0:s.top()-1;
                        s.push(i);
                }
        }
        //for the max area 
        int area=0;
        for(int i=0;i<n;i++){
                area = max(area,heights[i]*(right[i]-left[i]+1));
        }
        return area;
}

int main() {
	// your code goes here
	vector<int>heights;
	heights.push_back(2);
	heights.push_back(1);
	heights.push_back(5);
	heights.push_back(6);
	heights.push_back(2);
	heights.push_back(3);
	cout<<largestRectangleWindow(heights)<<endl;
	return 0;
}
