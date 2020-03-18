#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
int ans=0x7ffffff,n,a,b;
int level[222];
bool vis[222];
int dfs(int a,int sum){
	if(a==b)  ans=min(sum,ans)
	if(sum>=n)  return;
	vis[a]=1;
	if(a+level[a]<=b&&!vis[a+level[a]])  dfs(a+level[a],sum+1);
	if(a-level[a]>=1&&!vis[a-level[a]])  dfs(a-level[a],sum+1);
	vis[a]=0;
}

int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		scanf("%d",&level[i]);
	}
	dfs(a,0);
	if(ans!=0x7ffffff)  printf("%d",ans);
	else printf("-1");
	return 0;
}
