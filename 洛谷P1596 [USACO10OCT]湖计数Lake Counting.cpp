#include<iostream>
#include<cstdio>
using namespace std;
int map[105][105];
int m[105][105];
int n,mm,sum;
int p[8][2]={{0,1},{1,0},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
char a;
void dfs( int a,int b)
{
	m[a][b]=0;
	for(int i=0;i<8;i++){
		if(map[a+p[i][0]][b+p[i][1]] && m[a+p[i][0]][b+p[i][1]])
		{
			dfs(a+p[i][0],b+p[i][1]);
		} 
	}
}
int main()
{
	cin>>n>>mm;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=mm;j++){
			m[i][j]=1;//��ǵ�ͼ��û�ù�����1 ���ù�����0 		
			cin>>a;
			if(a=='W')  map[i][j]=1;//��ͼ����ˮ�ĵط����Ϊ1
			else map[i][j]=0; 
		}
	}
	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=mm;j++){
//			cout<<map[i][j]<<" ";		
//	
//		}
//		cout<<endl;
//	}
//	cout<<endl;		
	for(int i=1;i<=n;i++){
		for(int j=1;j<=mm;j++){
			if(map[i][j]==1&&m[i][j]==1){				
				dfs(i,j);
				sum++;
			}
		}
	}
	cout<<sum<<endl;
 } 
