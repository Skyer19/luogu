#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
#define MAX 1000005
long long n,maxn,high;
long long a[MAX];


bool check(long long high){
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=high){
			sum+=a[i]-high;
		} 
	}
	return sum>maxn;
}

int main(){
	long long left=0,right=0,mid=0;

	scanf("%lld%lld",&n,&maxn);
	
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	    if(a[i]>right) right=a[i];
	}
	while(left<=right){
		 mid=(right+left)>>1;
		if(check(mid)){
			high=mid;
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
    mid=min(mid,left);
    mid=min(mid,right);
	cout<<mid<<endl;
	return 0;
}
