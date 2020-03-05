#include<iostream>
#include<cmath>
using namespace std;
int sx,sy,m,n,times=0,blood=6,tx,ty,temp;
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int map[20][20];
bool ma[20][20];
int Min=300;
void dfs(int a,int b)
{
	if(map[a][b]==4){
		blood=6;
	}
	if(blood>0&&a==tx&&b==ty){
		if(times>0){
//			cout<<times<<endl;
			Min=min(Min,times);
		}
		return;
	}else if(blood==0||a<0||b<0||a>n||b>m){
		return;	
	}else{
		for(int i=0;i<=3;i++){
			if(map[a+dx[i]][b+dy[i]]!=0&&ma[a+dx[i]][b+dy[i]]==0){
				ma[a+dx[i]][b+dy[i]]=1;
				blood--;
				times++;
				dfs(a+dx[i],b+dy[i]);
				blood++;
				times--;
				}
		}
	}
	
	
 } 
 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(map[i][j]==2) {
				sx=i;
				sy=j;
			}  
			else if(map[i][j]==3){
			  tx=i;ty=j; 
			  break;	
			} 
		}
	}
//	cout<<sx<<" "<<sy<<" *"<<endl;
//	cout<<tx<<" "<<ty<<" %"<<endl;
	dfs(sx,sy);
	if(Min==300){
		cout<<-1<<endl;
	}else{
		cout<<Min<<endl;
	}
}
