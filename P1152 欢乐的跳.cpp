#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n;
long long num[999999]={0};
long long a[9999999];
int main(){
	scanf("%d",&n);
	scanf("%lld",&a[0]);
	for(int i=1;i<=n-1;i++){
		scanf("%lld",&a[i]);
		num[abs(a[i-1]-a[i])]++;
	}

	for(int i=1;i<=n-1;i++){
		if(!num[i]) {
			printf("Not jolly");
			return 0;
		}
	}
	printf("Jolly");
			return 0;
}
