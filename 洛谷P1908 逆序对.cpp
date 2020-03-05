#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n,ans;
long long num[500005]; 
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lldd",&num[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(num[i]>num[j]) ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}
