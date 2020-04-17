#include<cstdio>
#include<iostream>
int a[2222222];
int n,m;
using namespace std; 
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(m--){
		scanf("%d",&n);
		cout<<a[n]<<endl;
	}
	return 0;
}
