#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
double x[20];
double y[20];
double dis[200][200];
bool viq[20];
double ans=999999999.99;
void dfs(int count,int index,double len){
	if(len>=ans){
		return;
	}
	if(count==n){
		ans=min(ans,len);
		return;
	}
	for(int i=1;i<=n;++i){
		if(!viq[i]){
			viq[i]=1;
			dfs(count+1,i,len+dis[index][i]);
			viq[i]=0;
		}
	}
}
int main(){
	std::ios::sync_with_stdio(0)
	cin>>n;
//	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		cin>>x[i]>>y[i];
//		scanf("%lf%lf",&x[i],&y[i]);
	}
	x[0]=0;y[0]=0;
	for(int i=0;i<=n;++i){
		for(int j=0;j<=n;j++){
		dis[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));	
		}
	}
	dfs(0,0,0.0);
	printf("%.2f",ans);
	return 0;
}
