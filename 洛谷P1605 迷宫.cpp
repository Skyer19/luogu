#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int map[6][6];
bool mark[6][6];
int xc[4]= {0,0,1,-1};
int yc[4]= {-1,1,0,0};
int sum,xs,ys,xe,ye,n,m,t;
void search(int x,int y) {
	if(x==xe&&y==ye) {
		sum++;
		return;
	} else {
		for(int i=0; i<=3; i++) {
			if(mark[x+xc[i]][y+yc[i]]==0&&map[x+xc[i]][y+yc[i]]==1) 
			{
				mark[x][y]=1;
				search(x+xc[i],y+yc[i]);
				mark[x][y]=0;
			}
		}
	}
}
int main() {
	cin>>n>>m>>t;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			map[i][j]=1;
		}
	}
	cin>>xs>>ys>>xe>>ye;
	for(int i=0; i<t; ++i) { //??????бу-ж╠?
		int x,y;
		cin>>x>>y;
		map[x][y]=0;
	}	
	search(xs,ys);
	cout<<sum<<endl;

}

