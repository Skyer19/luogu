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
	for(int i=1;i<=2*n;++i){//����ѡ�ֵĳ�ʼ���� 
		a[i].id=i;
//		cin>>a[i].score;
		scanf("%d",&a[i].score);
	}
	for(int i=1;i<=2*n;++i){//����ѡ�ֵ�ʵ��ֵ 
//		cin>>a[i].ability;
		scanf("%d",&a[i].ability);
	}
	sort(a+1,a+2*n+1,complare);//���б�����ʼǰ����һ������ 
//	msort(a+1,a+2*n+1);	
	
	while(r--){  //һ��Ҫ����r������ 
		for(int j=1;j<=2*n;j+=2){  //ÿ�����˽���һ������ 
			if(a[j].ability>a[j+1].ability)  {//ʵ��ֵ�ߵĵ�1�� 
				a[j].score++;
			}else{
				a[j+1].score++;
			}
		}
		sort(a+1,a+2*n+1,complare);//ÿ�����������һ������ 

	}
	cout<<a[q].id<<endl;//���������q��ѡ�ֵı�š�
	return 0;
} 

