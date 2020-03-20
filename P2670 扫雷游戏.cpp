#include<iostream>
#include<cstdio>
using namespace std;
int n,m;
int map[105][105];
int vis[105][105];
int x0[8]={-1,1,0,0,1,1,-1,-1};
int y0[8]={0,0,1,-1,-1,1,1,-1};
int bomb(int a,int b){
	int sum=0;
	for(int k=0;k<=7;k++){
		int x=a+x0[k];
		int y=b+y0[k];
		if(map[x][y]) sum++;
	}
	return sum;
}


int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='*')  map[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!map[i][j]){
				vis[i][j]=bomb(i,j);
				printf("%d",vis[i][j]);
			}				
			else printf("*");
		}
		printf("\n");
	}
}

