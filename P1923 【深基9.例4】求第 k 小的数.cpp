#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
//这题有问题 
int n,m,num;
priority_queue<int,vector<int>,greater<int> > p;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		p.push(num);
	}
	for(int i=0;i<m;i++){
		p.pop();
	}
	printf("%d",p.top());
}
