#include<iostream>
#include<cstdio>
using namespace std;
int m,n,sum;
int a[500][500];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
void dfs(int c,int d)
{
	if(c>m+1||c<0||d>n+1||d<0||a[c][d]){
		return;			
	}	
	else{
		a[c][d]=2;
		for(int i=0;i<=3;i++) { 
	        dfs(c+dx[i],d+dy[i]);
		}			
	}			
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin>>c;
			if(c=='*') a[i][j]=1;
			else a[i][j]=0;
			}
		}
		
	dfs(0,0);

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(!a[i][j])  sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
