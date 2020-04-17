#include <iostream>  
#include <algorithm> 
using namespace std;
int a[33][33];//��¼�Ƿ���·������ 
int path[33];//��¼���� 
int ans[33];//��¼���ֵʱ������ 
int vis[33];
int amount[33];//��¼������ 
int n,maxn,cnt;
int check(int x){
	for(int i=1;i<=n;i++){
		if(a[x][i]&&!vis[i]) return true;
	}
	return false;
}
void dfs(int x,int sum,int index) {
	
	if(!check(x)){
		if(maxn<sum){
			maxn=sum;
			cnt=index;
			for(int i=1;i<=index;i++){
				ans[i]=path[i];
			}
		}
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(a[x][i]&&!vis[i]){
			vis[i]=1;
			path[index+1]=i;
			dfs(i,sum+amount[i],index+1);
			vis[i]=0;
		}
	}

}
int main() {
	scanf("%d", &n);
	
	for (int i = 1; i <=n; i++) {
		scanf("%d", &amount[i]);
	}
	
	for (int i = 1; i<n; i++) {
		for (int j = i + 1; j<=n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		vis[i]=1;
		path[1]=i;
		dfs(i,amount[i],1);
		vis[i]=0;
	}
	for(int i=1;i<=cnt;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl<<maxn<<endl;
	return 0;
}
