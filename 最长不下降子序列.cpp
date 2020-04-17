#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
const  int N=100;
int num[N],dp[N];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	
	int ans=-1;
	for(int i=1;i<=n;i++){
		dp[i]=1;	
		for(int j=1;j<i;j++){
			if(num[i]>=num[j]&&(dp[j]+1>dp[i])){
				dp[i]=dp[j]+1;
			}
		}
		ans=max(ans,dp[i]);
	}
	printf("%d",ans);
	return 0;
} 
