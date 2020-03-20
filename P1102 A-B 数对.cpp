#include<iostream>
#include<cstdio>
#include<iomanip>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int n,c,sum=0;
	int a[2020];
	scanf("%d%d",&n,&c);
	map<int,int> m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		m[a[i]]++;
	}
	for(int i=0;i<n;i++){
		sum+=m[a[i]+c];
	}
	printf("%d",sum);
	return 0;
}
