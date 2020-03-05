#include<iostream>
#include<algorithm>
#include<cstring>
int a[30000];
using namespace std;
int main()
{
	int max,n,count;
	cin>>max>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int i,j;
	i=0;j=n-1;
	while(i<=j){
		if(a[i]+a[j]<=max){
			count++;
			i++;j--;
		}else{
			j--;
			count++;
		}
	}	
	cout<<count<<endl;
	return 0;
	
}
