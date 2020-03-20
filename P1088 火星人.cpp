/*#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
int n,cns=0,m,flag=0;
int vis[1007];
int num[1007];
void print() {
	for(int j=1; j<=n; j++) {
		printf("%d ",num[j]);
	}
	flag=1;
}

void dfs(int index) {
	if(flag) return;
	if(index>n) {
		cns++;
		if(cns==m+1) {
			print();
			return;
		}
	}
	for(int i=1; i<=n; i++) {
		if(!cns) i=num[index];
		if(!vis[i]) {
			vis[i]=1;
			num[index]=i;
			dfs(index+1);
			vis[i]=0;
		}
	}
}


int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		scanf("%d",&num[i]);
	}
	dfs(1);
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int a[10005],n,m;
int main() {
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++)scanf("%d",&a[i]);
	while(m--) {
		next_permutation(a,a+n);
	}
	for(int i=0; i<n; i++)  {
		printf("%d ",a[i]);
	}
	return 0;
}

