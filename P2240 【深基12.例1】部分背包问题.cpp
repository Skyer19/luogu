#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;

struct coin{
	double weight,value;
	float avg;
}a[111];
bool cmp(coin a,coin b){
	return a.avg>b.avg;
}

int main(){
	int n,w;
	double ans=0;
	scanf("%d%d",&n,&w);
	for(int i=0;i<n;i++){
		cin>>a[i].weight>>a[i].value;
		a[i].avg=a[i].value*1.0/a[i].weight;
	}
	sort(a,a+n,cmp);
	
//	for(int i=0;i<n;i++){
//		cout<<a[i].weight<<" "<<a[i].value<<" "<<a[i].avg<<endl;
//	}
	
	for(int i=0;i<n;i++){
		if(w-a[i].weight>=0) {
			ans+=a[i].value;
			w=w-a[i].weight;
		}else{
			ans+=w*a[i].avg;
			w=0;
		}
	}
	printf("%.2lf",ans);
}
