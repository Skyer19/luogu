#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int n,r;
int num[25];
int vis[25];
void print(){
	for(int i=1;i<=r;i++){
		cout<<setw(3)<<num[i];
	}
	cout<<endl;
}
void dfs(int index){
	if(index>r) {
		print();
		return ;
	}
	for(int i=num[index-1];i<=n;i++){
		if(!vis[i]){
			num[index]=i;
			vis[i]=1;
			dfs(index+1);
			vis[i]=0;
		}
	}
}



int main(){
	scanf("%d%d",&n,&r);
	num[0]=1;
	dfs(1);
}
