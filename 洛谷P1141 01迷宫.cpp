#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>
#include<iomanip>
using namespace std;
int map[1005][1005];
int inq[1005][1005];
int temp[1000006][2];
int n,m,cou;
int X[]={-1,1,0,0};
int Y[]={0,0,-1,1};
struct node{
	int x,y;
}S,Node;
bool judge(int x,int y){
	if(x>n||x<1||y>n||y<1)  return false;
//	if(inq[x][y]==true) return false;
	return true;
}
void bfs(){
	queue<node> q;
	q.push(S);
	cou=1;
	inq[S.x][S.y]=1;
	temp[cou][0]=S.x;
	temp[cou][1]=S.y;
	while(!q.empty()){
		node top=q.front();
		q.pop();
		for(int i=0;i<=3;i++){
		int newX=top.x+X[i];
		int newY=top.y+Y[i];
		if((!inq[newX][newY])&&judge(newX,newY)&&abs(map[top.x][top.y]-map[newX][newY])){
			Node.x=newX;
			Node.y=newY;
			q.push(Node);
			inq[newX][newY]=true;
			cou++;
			temp[cou][0]=newX;
			temp[cou][1]=newY;
		}
	}
	} 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			char a;
			cin>>a;
			map[i][j]=a-'0';
		}
	}

	for(int i=0;i<m;++i){
//		memset(inq,0,sizeof(inq));		
		cou=0;
		scanf("%d%d",&S.x,&S.y);
		if(inq[S.x][S.y]>0){
			printf("%d\n", inq[S.x][S.y]);
            continue;
		}else{
			bfs();
			for(int j = 1; j <= cou; j++)
            inq[temp[j][0]][temp[j][1]] = cou; //依据坐标数组，为答案数组填上pl 
        	printf("%d\n", cou);
		}	
//	printf("%d\n",cou);
	}
}
