#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
int n,m; 
int a[1000010];
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		int num,flag=0,index=-1;
		scanf("%d",&num);
		int l=1,r=n;
		while(l<=r){
			int mid=(r-l)/2+l;
			if(a[mid]==num){
				index=mid;
				break;
			}else if(num<a[mid]){
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		
		if(index!=-1){
			while(a[index-1]==num){
			if(index==1) break;
				index--;
			} 
			cout<<index<<" ";
		}else{
			cout<<-1<<" ";		
		} 		
	}
	cout<<endl;
}
