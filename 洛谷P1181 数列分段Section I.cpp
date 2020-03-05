#include<iostream>
#include<algorithm>
#include<cstring>
int a[100001];
using namespace std;
//2020/2/10
int main()
{
	int n,max,count=0,num=0;
	cin>>n>>max;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
//	num=a[1];
	for(int i=1;i<=n;i++){
		if(max-num>=a[i]){
			num+=a[i];
//			cout<<i<<":"<<endl;
		}else{
			num=a[i];
			count++;			
		}
		if(max-num>=0&&i==n){
			count++;
		}		
	}
	cout<<count<<endl;
	return 0;
}
