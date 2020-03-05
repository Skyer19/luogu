#include<iostream>
using namespace std;
//2020/2/12
int n;
int array[35][35];
int xc[4]= {0,0,1,-1};
int yc[4]= {-1,1,0,0};
void dfs( int a,int b)
{
	if(a<0||b<0||a>n+1||b>n+1||array[a][b]){
		return;
	}else{
		array[a][b]=3;
		for(int i=0;i<=3;i++){
			dfs(a+xc[i],b+yc[i]);
		}	
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>array[i][j];
		}
}
		dfs(0,0);

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(array[i][j]==3){
				cout<<0<<" ";
			}else if(array[i][j]==1){
				cout<<1<<" ";
			}else{
				cout<<2<<" ";
			}
//		cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
