#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
    long long b,s=0;
    int n;
    int a[20005];
    scanf("%d %lld",&n,&b);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+m+1,cmp);
    for(int i=1;i<=n;i++){
        s+=a[i];
        if(s>=b){
            cout<<i;
            return 0;
        }
    }
    return 0;
}
