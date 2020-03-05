#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct student{
	int id;
	int score;
	int ability;
}a[200000];
void msort(int s,int t);
bool complare(const student a,const student b)
  {
  	if(a.score==b.score) return a.id<b.id;
	return a.score>b.score; 
  }

int main()
{
	int n,r,q;
	scanf("%d%d%d",&n,&r,&q);
	for(int i=1;i<=2*n;++i){//输入选手的初始分数 
		a[i].id=i;
//		cin>>a[i].score;
		scanf("%d",&a[i].score);
	}
	for(int i=1;i<=2*n;++i){//输入选手的实力值 
//		cin>>a[i].ability;
		scanf("%d",&a[i].ability);
	}
	sort(a+1,a+2*n+1,complare);//所有比赛开始前进行一次排序 
//	msort(a+1,a+2*n+1);	
	
	while(r--){  //一共要进行r场比赛 
		for(int j=1;j<=2*n;j+=2){  //每两个人进行一场比赛 
			if(a[j].ability>a[j+1].ability)  {//实力值高的得1分 
				a[j].score++;
			}else{
				a[j+1].score++;
			}
		}
		sort(a+1,a+2*n+1,complare);//每场比赛后进行一次排序 

	}
	cout<<a[q].id<<endl;//输出排名第q的选手的编号。
	return 0;
} 

