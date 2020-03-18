#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
stack<int> s;
int t,n,num,flag;
int main(){
	scanf("%d",&t);
	while(t--){
		while(!s.empty()) s.pop();
		scanf("%d",&n);
		flag=0;
		for(int i=0;i<n;i++){
			scanf("%d",&num);
			s.push(num);
		}		
		while(n--){
				scanf("%d",&num);
				if(s.top()==num){
					s.pop();
				}else{
					flag=1;
					break;
				}
		}
		if(!flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
} 
