#include <bits/stdc++.h>
using namespace std;
int n,sum;
int tri[20][20];
int num[15];
bool inq[15]; 
void dfs(int index,int s)
{
	if(s>sum){
		return ;
	}
	if(index>n){
//		cout<<s<<endl;
		if(s==sum){
			for(int i=1;i<=n;i++){
				cout<<num[i];
				if(i<n)  cout<<" ";
			}
			exit(0);
		}
		return;
	}
	for(int i=1;i<=n;i++){
//		cout<<"yes"<<endl;
		if(inq[i]==0){
			inq[i]=1;
			num[index]=i;
//			cout<<"yes"<<endl;
			dfs(index+1,s+i*tri[n][index]);
			inq[i]=0;
		}
	}
}
int main(){
	cin>>n>>sum;
	tri[1][1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			tri[i][j]=tri[i-1][j-1]+tri[i-1][j];			
		}
	}
//	a[1][1]=1;
//	for(int i=1;i<=n;i++)
//	{
//		tri[i][1]=1;
//		tri[i][i]=1;
//		for(int j=2;j<=i-1;j++)
//		tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
//	}
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=i;j++){
//				cout<<tri[i][j];			
//			}
//			cout<<endl;
//	    }
	dfs(1,0);
	return 0;
}
