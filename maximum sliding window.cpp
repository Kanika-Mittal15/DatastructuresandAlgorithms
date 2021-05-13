#include <bits/stdc++.h>
using namespace std;

void maximumSlidingWindow(vector<int>window,int k){
        int n= window.size();
        std::deque<int>q ;
        //first window
        for(int i=0;i<k;i++){
                while(!q.empty() and window[i]>=window[q.back()]){
                        q.pop_back();
                }
                q.push_back(i);
        }
        //rest of the windows 
        for(int i=k;i<n;i++){
                cout<<window[q.front()]<<" ";
                while(!q.empty() and q.front()<=i-k){
                        q.pop_front();
                }
                
                while(!q.empty() and window[i]>=window[q.back()]){
                        q.pop_back();
                }
                q.push_back(i);
        
                
        }
        cout<<window[q.front()];//last element
}

int main() {
	// your code goes here
	vector<int>window ;
	window.push_back(8);
	window.push_back(5);
	window.push_back(10);
	window.push_back(7);
	window.push_back(9);
	window.push_back(4);
	window.push_back(15);
	window.push_back(12);
	window.push_back(90);
	window.push_back(13);
	maximumSlidingWindow(window,3);
	return 0;
}
