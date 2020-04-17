#include<bits/stdc++.h>
using namespace std;
//40
int n,m,ans;
int save[1003];
void dfs(int index){
	if(index>n) return;
	if(index==n){
		ans++;
		return;
	}
	dfs(index+1);
	dfs(index+2);
}

int main(){
	scanf("%d%d",&m,&n);
	dfs(m);
	printf("%d",ans);
}
