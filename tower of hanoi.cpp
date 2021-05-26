#include <iostream>
using namespace std;

void towerofhanoi(int s,int h,int d,int n,int& count){
        count++;
        if(n==1){
                cout<<"move"<<n<<"from"<<s<<" to "<<d<<endl;
                
                return;
        }
        towerofhanoi(s,d,h,n-1,count);
        cout<<"move"<<n<<"from"<<s<<" to "<<d<<endl;
        towerofhanoi(h,s,d,n-1,count);
        return;
}


int main() {
	int s=1;
	int h=2;
	int d=3;
	int count=0;
	towerofhanoi(s,h,d,5,count);
	cout<<count;
	return 0;
}
