#include<iostream>
#include<cstdio>
using namespace std;
int r,c;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int map[205][205];
int ans;
int re[205][205];
int dfs(int x,int y){
	if(re[x][y])  return re[x][y];
	re[x][y]=1;
	for(int i=0;i<=3;i++){
		int newx=x+dx[i];
		int newy=y+dy[i];
		if(newx>0&&newx<=r&&newy>0&&newy<=c){
			if(map[x][y]>map[newx][newy]){
//				dfs(newx,newy);
				re[x][y]=max(re[x][y],dfs(newx,newy)+1);
			}
		}
	}
	return re[x][y];
}
int main(){
	scanf("%d%d",&r,&c);
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			scanf("%d",&map[i][j]);
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			ans=max(ans,dfs(i,j));
		}
	}
	printf("%d",ans);
	return  0;
}
