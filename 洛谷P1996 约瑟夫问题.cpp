#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,k=1;
int num[105];
queue<int>q;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	while(!q.empty()){
		for(int i=1;i<m;i++){
			q.push(q.front());
			q.pop();
		}
		cout<<q.front()<<" ";		
		q.pop();
	}
	return 0;

}
