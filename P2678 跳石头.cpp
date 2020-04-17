#include<bits/stdc++.h>
using namespace std;
int dis[50005];
int L,N,M,ans;
bool check(int limit){
	int sum=0,index=0;
	for(int i=1;i<=N;i++){
		if(dis[i]-dis[index]<limit){
			sum++;
		}else{
			index=i;
		}
	}
	return sum<=M;
} 
int main(){
	scanf("%d%d%d",&L,&N,&M);
	for(int i=1;i<=N;i++){  //第i块岩石与起点的距离 
		scanf("%d",&dis[i]);
	}
	int left=0,right=L,mid=0;
	while(left<=right){
		mid=(left+right)/2;
		if(check(mid)){
			ans=mid;
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	printf("%d",ans);
    return 0;
}
