#include<iostream>
#include<cstdio>
using namespace std;
int num[9999];
bool panduan[9999];
int n,r;
int cns=0;
//void print(){
//    for(int i=1;i<=r;i++){
//        printf("%d",num[i]);
//        if(i<=r-1){
//            printf(" ");
//        }
//    }
//    printf("\n");
//}
void dfs(int index,int sum){
	if(sum>n)  return;
    if(index>r){
    	if(sum==n)cns++;
        return;
    }
    for(int i=num[index-1];sum+i<=n;i++){  //¼ôÖ¦ 
            num[index]=i;    	
            dfs(index+1,sum+i);
    } 
}
int main(){
scanf("%d%d",&n,&r);
    num[0]=1;
    dfs(1,0);
    printf("%d",cns);
    return 0;
}
