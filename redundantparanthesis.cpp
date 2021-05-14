#include <bits/stdc++.h>
using namespace std;


//redundant paranthesis using stack

bool redundantParanthesis(string a){
        int n = a.size();
        stack<char>s;
        for(int i=0;i<n;i++){
                if(a[i]=='+'|| a[i]=='-'|| a[i]=='*' || a[i]=='/' || a[i]=='('){
                        s.push(a[i]);
                }
                else if(a[i]==')'){
                        if(s.top()=='('){
                                return true;
                        }
                        while(!s.empty() and s.top()!='(' ){
                                s.pop();
                        }
                        s.pop();
                        
                }
        }
        return false;
}
int main() {
	// your code goes here
	string arr="(a+(a+b))";
	if(redundantParanthesis(arr)){
	        cout<<1;
	}
	else{
	        cout<<0;
	}
	return 0;
}
