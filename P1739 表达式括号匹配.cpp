#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
stack<char> s;
string str;
int main(){
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			s.push(str[i]);
		}else if(str[i]==')'){
			if(!s.empty()){
				s.pop();
			}else{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	if(s.empty()) cout<<"YES"<<endl;
	else{
			cout<<"NO"<<endl;
	}
}
