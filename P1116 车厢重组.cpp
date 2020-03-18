#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n;
int a[10005];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int ans=0;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ans++;
			}
		}
	}
	printf("%d",ans);
	return 0;
}
