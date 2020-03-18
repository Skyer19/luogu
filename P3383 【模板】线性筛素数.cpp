#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n,all;
#define maxN 200
int cut=0;
bool num[999];
int  prime[999];
void isPrime(int N){
	memset(num,false, sizeof(num));
	num[0]=num[1]=1;
	for(int i=2;i<=N;i++){
		if(!num[i]){
			prime[++cut]=i;
		}		
		for(int j=1;j<=cut&&i*prime[j]<=N;j++){
			num[i*prime[j]]=1;
			if(i%prime[j]==0)
				break;
			
		}
	
	}
} 
//bool vis[maxN];
//int prime[maxN],cnt;
//
//void init()
//{
//    memset(vis,false, sizeof(vis));//所有数初始化为0->质数
//    vis[0]=true;
//    vis[1]=true;
//    cnt=0;
//}
//void Is_Prime(int N)
//{
//    init();
//    for(int i=2;i<=N;i++)
//    {
//        if(!vis[i])//i是质数
//            prime[++cnt]=i;//prime是用来存质数的数组，显然数组中的质数是从小到大
//        for(int j=1;j<=cnt;j++)
//        {
//            if(i*prime[j]>N)//超出了范围
//                break;
//            vis[i*prime[j]]=true;
//            if(i % prime[j] == 0)//跑到了i的最小的质因数
//                break;
//        }
//    }
//}

int main()
{
	std::ios::sync_with_stdio(0);
	cin>>n>>all;
	isPrime(n);
	for(int i=1;i<=all;i++){
		printf("%d\n",prime[i]);
	}
	return 0;
}
