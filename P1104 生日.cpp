#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
int n;
struct people{
	string s;
	int year,month,day;
	int i;
}c[111];

bool cmp(people c,people d){
	if(c.year!=d.year) return c.year<d.year;
	else if(c.year==d.year&&c.month!=d.month) return c.month<d.month;
	else if(c.year==d.year&&c.month==d.month&&c.day==d.day)return c.i>d.i;
	else return c.day<d.day;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		c[i].i=i;
		cin>>c[i].s>>c[i].year>>c[i].month>>c[i].day;
	}
	sort(c,c+n,cmp);
	for(int i=0;i<n;i++){
		cout<<c[i].s<<endl;
	}
}
