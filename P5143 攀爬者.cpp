#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n;
struct point{
	double x,y,z;
}a[555555];
bool cmp(point a,point b){
	return a.z<b.z;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf",&a[i].x,&a[i].y,&a[i].z);
	}
	sort(a,a+n,cmp);
	double len=0;
	for(int i=1;i<n;i++){
		int x0=pow(a[i].x-a[i-1].x,2);
		int y0=pow(a[i].y-a[i-1].y,2);
		int z0=pow(a[i].z-a[i-1].z,2);
		len+=sqrt(x0+y0+z0);
	}
	printf("%.3lf",len);
}
