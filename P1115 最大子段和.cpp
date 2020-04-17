#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
const int maxn = 2222222;
int num[maxn],dp[maxn];
int n;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	dp[0]=num[0];
	for(int i=1;i<n;i++){
		dp[i]=max(num[i],dp[i-1]+num[i]);
	}
	int k=dp[0];
	for(int i=1;i<n;i++){
		if(k<dp[i]) k=dp[i];
	}
//	if(k<0) printf("%d",1);
//	else printf("%d",k);
	printf("%d",k);
	return 0;
} 
