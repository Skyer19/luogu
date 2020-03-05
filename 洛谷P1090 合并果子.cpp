#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[10000];
int b[10000];
int sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<n;i++){	
		a[i]=a[i]+a[i-1];	
		sum+=a[i];
		cout<<sum<<endl;
	}
//	cout<<sum<<endl;
	return 0;
}
