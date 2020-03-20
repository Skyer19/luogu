#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int n,k;
int a[100005];

bool check(int c){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(int)(a[i]/c);
	}
	return sum>=k;
}


int main(){
	scanf("%d%d",&n,&k);
	int left=1,right=0,mid=0;
	int len=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>right) right=a[i];
	}
	
	while(left<=right){
		mid=(left+right)/2;
		if(check(mid)){
			len=mid;
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	cout<<len<<endl;
	
}
