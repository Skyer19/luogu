#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
int a[2000005];
int n,m;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	for(int i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
