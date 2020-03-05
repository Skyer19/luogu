#include<iostream>
using namespace std;
int a[10000];
int main()
{
	int num,i,j;
	while(cin>>num){
	
	a[0]=1;//储存有多少位 
	a[1]=1;
	for(i=1;i<=num;i++){
		for(j=1;j<=a[0];j++){
			a[j]=i*a[j];
//			cout<<a[j]<<endl;
		}
		
		for(int k=1;k<=a[0];k++){
			a[k+1]+=a[k]/10;
			a[k]%=10;
		}
		if(a[a[0]+1]>0){
			a[0]++;
		}
	}
	for(i=a[0];i>=1;i--){
		cout<<a[i];
	}
}
	return 0;
}

