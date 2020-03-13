#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
long long t,n,m,k;
const int maxn=2e5+10;
int num[maxn];
char c[maxn];
int main(){
	scanf("%d",&t);
	while(t--){
		int al[26]={0};
		int cut[26]={0};
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++){
			cin>>c[i];
		}
		for(int i=0;i<m;++i){
			cin>>k;
			num[k]++;
		}
		for(int i=1;i<=n;i++){
			al[c[i]-'a']++;
			cut[c[i]-'a']++;
			if(num[i]){
				for(int j=0;j<26;j++){
					al[j]+=num[i]*cut[j];
				}
//				for(int j=1;j<=num[i];j++){
//					al[c[i]-'a']+=num[i];
//				}
			}
		}
		for(int i=0;i<26;++i){
			printf("%d",al[i]);
			if(i<25) printf(" ");
		}
		printf("\n");
		memset(num,0,sizeof(num));
	}
}

int gcd(int a,int b){
	return !b?a:gcd(b,a%b);
} 
