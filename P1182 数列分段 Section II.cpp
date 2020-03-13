#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAXN = 1e5+10;
int num[MAXN];
int n,m;
bool check(int limit){
	int cnt=1,sum=0;
	for(int i=1;i<=n;i++){
		if(num[i]>limit){
			return false;
		}
		if(sum+num[i]>limit){
			cnt++;
			sum=num[i];
		}else{
			sum+=num[i];
		}
	}
	return cnt<=m;
}
int main(){
	int l=1,r=1e9,ans;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	while(l<=r){
		int mid=(r-l)/2+l;
		if(check(mid)){
			ans=mid;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	printf("%d",ans);
	return 0;
}
