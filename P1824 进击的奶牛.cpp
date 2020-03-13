#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e5+10; 
int n,c,a[maxn];
bool check(int limit){
	int cnt=1,last=a[1];
	for(int i=2;i<=n;++i){
		if(a[i]-last>=limit){
			cnt++;
			last=a[i];
		}
	}
	return cnt>=c;
}
int main(){
	scanf("%d%d",&n,&c);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	int l=1,r=1e9,ans;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}

