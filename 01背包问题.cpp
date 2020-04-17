#include <iostream>  
#include <algorithm> 
using namespace std;
int N,W;
int w[1005];
int v[1005];
int dp[101];
//void solve(){
//	for(int i=0;i<N;i++){
//		for(int j=0;j<=W;j++){
//			if(j<w[i]){
//				dp[i+1][j]=dp[i][j];
//			}else{
//				dp[i+1][j]=max(dp[i][j],dp[i+1][j-w[i]]+v[i]);
//			}
//		}
//	}
//}
void solve(){
	for(int i=0;i<N;i++){
		for(int j=W;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	printf("%d",dp[W]);
} 
int main(){
	cin>>W>>N;
	for(int i=0;i<N;i++) cin>>w[i]>>v[i];
	solve();
//	cout<<dp[N][W];
}


} 
