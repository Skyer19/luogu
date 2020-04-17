#include <iostream>  
#include <algorithm> 
using namespace std;
int n,m;
string s,t;
int dp[11][11];
void solve(){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i]==t[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}else{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
//			cout<<"dp["<<i+1<<"]"<<"["<<j+1<<"]="<<dp[i+1][j+1];
//cout<<endl;
		}
//		for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++){
//				cout<<dp[i][j]<<" ";
//			}
//			cout<<endl;	
//		}
//			cout<<endl;	

	}
}

int main(){
	cin>>n>>m;
	cin>>s>>t;
	solve();
	cout<<dp[n][m]; 
}
 
