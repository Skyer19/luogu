#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int max,n,sum=0;
	cin>>max>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int l=0,r=n-1;
	while(l<r){
		if(a[l]+a[r]<=max){
			a[l]=0;
			a[r]=0;
			l++;r--;
			sum+=1;
		}else{
			r--;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0) sum++;
	}
	cout<<sum<<endl;
}
