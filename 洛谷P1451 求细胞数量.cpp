#include<iostream>
#include<cstdio>
using namespace std;
int array[105][105];
bool boo[105][105];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int m,n,sum;
char cha;

void dfs(int a,int b)
{
	boo[a][b]=0;
	if(!array[a][b]||a<0||b<0||a>m||b>m){
		return ;
	}
	for(int i=0;i<=3;i++){
		if(boo[a+dx[i]][b+dy[i]]==1&&array[a+dx[i]][b+dy[i]]!=0)
		{
			dfs(a+dx[i],b+dy[i]);
			boo[a+dx[i]][b+dy[i]]=1;
		}
	}
}
int main()
{
	scanf("%d%d",&m,&n);
	cout<<m<<" "<<n<<endl;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			boo[i][j]=1;  //1 标记为未用过 
			cin>>cha;
			array[i][j]=int(cha-'0');
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(boo[i][j]=1&&array[i][j]!=0){
			dfs(i,j);
			sum++;	
   //		cout<<array[i][j]<<" ";
		}
   //		cout<<endl;
	}

	}
	cout<<sum<<endl;
	return 0;
}
