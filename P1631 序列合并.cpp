#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
#define N 100005
int n,a[N],b[N];
priority_queue<int,vector<int>,greater<int> > p;
int main(){
	scanf("%d",&n);
    for(int i=1;i<=n;++i) scanf("%d",&a[i]);
    for(int i=1;i<=n;++i) scanf("%d",&b[i]);
    for(int i=1;i<=n;++i){
        for(int j=1;i*j<=n;++j){
            p.push(a[i]+b[j]);
        }
        }
    for(int i=1;i<=n;++i) {
    	printf("%d ",p.top());
		p.pop();
	}
}

