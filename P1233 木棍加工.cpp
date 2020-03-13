#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
struct tick{
	int l;
	int w;
}t[5005];
int check[5005]={0};
bool cmp (tick a,tick b){
	if(a.w==b.w) return a.l>b.l;
	return a.w>b.w;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&t[i].l,&t[i].w);
	}
	sort(t,t+n,cmp);
//	for(int i=0;i<n;i++){
//		printf("%d %d\n",t[i].l,t[i].w);
//	}
	int temp;
	for(int i=0;i<n;i++){
		if(!check[i]){
			temp=t[i].l;
			for(int j=i+1;j<n;j++){
				if(!check[j]&&t[j].l<=temp){
					temp=t[j].l;
					check[j]=1;
//					cout<<"record j"<<j<<endl;
				}
			}
		}
	}
	int sum=
	for(int i=0;i<n;i++){
		if(check[i]==0) {
		sum++;
		}
	}
	cout<<sum<<endl;
}
