#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
//55
int n,maxn=0;
int a[1001][1001];      

void dfs(int cen,int lie,int sum){
	if(cen>=n) {
		maxn=max(maxn,sum); return;
	}	
	
	dfs(cen+1,lie,sum+a[cen+1][lie]);	
	dfs(cen+1,lie+1,sum+a[cen+1][lie+1]);

}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i;++j){
			scanf("%d",&a[i][j]);
		}
	}
	dfs(1,1,a[1][1]);
	printf("%d",maxn);
}
