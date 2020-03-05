#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
#include<iomanip>
using namespace std;
int X[]= {0,1,1,-1,-1,1,0,-1};
int Y[]= {1,0,1,-1,1,-1,-1,0 };
char cha[]={'y','i','z','h','o','n','g'};
int newx1,newx2,newx3,newx4,newx5,newx6;
int newy1,newy2,newy3,newy4,newy5,newy6;
int m,n;
char map[105][105];
char map2[105][105];
string str="yizhong";
void dfs(int x,int y) {
	for(int i=0;i<8;i++){
		int flag=1;
		for(int j=1;j<=6;j++){
			int newx=x+j*X[i];
			int newy=y+j*Y[i];
			if(newx<1||newx>m||newy<1||newy>m){
				flag=0;
				break;
			}
			if(str[j]!=map[newx][newy]){
				flag=0;break;
			}			
		}
		if(!flag)continue;
		for(int j=0;j<=6;j++){
			int newx=x+j*X[i];
			int newy=y+j*Y[i];
			map2[newx][newy]=map[newx][newy];
		}
	}
}


int main() {
	cin>>m;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=m; j++) {
			cin>>map[i][j];
			map2[i][j]='*';
		}
	}
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=m; j++) {
				if(map[i][j]==str[0]) {
					dfs(i,j);
				}
			}
		}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=m; j++) {
			cout<<map2[i][j];
		}
		cout<<endl;
	}
}
