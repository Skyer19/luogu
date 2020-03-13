#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
struct node{
 	double num;
 	char op;
 	bool flag;
 };
 string str;
 queue<node> q;
 stack<node> s;
 node temp;
 
 int Cal(){
 	int temp1,temp2;
 	node cur,temp;
 	while(!q.empty()){
 		cur=q.front();
 		q.pop();
 		if(cur.flag==true){
 			s.push(cur);
		 }else{
		 	temp2=s.top().num;
		 	s.pop();
		 	temp1=s.top().num;
		 	s.pop();
		 	temp.flag=true;
		 	if(cur.op=='+')temp.num=temp1+temp2;
		 	else if(cur.op=='-')temp.num=temp1-temp2;
		 	else if(cur.op=='*')temp.num=temp1*temp2;
		 	else temp.num=temp1/temp2;
		 	s.push(temp);	 	
		 }
	 }
	 return s.top().num;
 }
int main(){
	getline(cin,str);
//	int j=str.length();

	for(string::iterator it =str.end();it!=str.begin();it--){
		if(*it=='.') str.erase(it);
//		j--;
	}
	
	for(int i=0;i<str.length()-1;i++){
		if(str[i]>='0'&&str[i]<='9'){
			temp.flag=true;
			temp.num=str[i++]-'0';
			while(str[i]>='0'&&str[i]<='9'&&i<str.length()){
				temp.num=temp.num*10+(str[i]-'0');
				i++;
			}
			q.push(temp);
		}else{
			temp.flag=false;
			temp.op=str[i];
			q.push(temp);
		}
	}
	while(!q.empty()){
		if(q.front().flag==1) cout<<q.front().num;
		else{
			cout<<q.front().op;
		}
		q.pop();
	}		
	printf("%d",Cal());
}
