#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n;
int sum;
int cut=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
//		if(!num[i]&&i>1){
		sum+=n/i;
	}
	printf("%d",sum);
}
