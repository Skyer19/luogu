#include<bits/stdc++.h>
using namespace std;
int m,n,score;
int school[200005],minn,sum;
bool check(){
	
}

int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		scanf("%d",&school[i]);
	}
	sort(school,school+m);
	for(int i=0;i<m;i++){
		printf("%d ",school[i]);
	}
	while(n--){
		scanf("%d",&score);
		int left=0,right=m-1;
		minn=0xfffff;
		while(left<=right){
			int mid=(left+right)/2;
			minn=min(abs(school[mid]-score),minn);
			if(score<school[mid]){
				right=mid-1;
			}else{
				left=mid+1;
			}
		}
//		printf("%d\n",minn);
		sum+=minn;
	}
	printf("%d\n",sum);
}
