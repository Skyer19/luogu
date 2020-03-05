#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int  num[n+1];
	for(int i=0;i<=n;i++)
	{
		cin>>num[i];
	}
	if(num[0]<-1)  cout<<num[0]<<"x^"<<n;
	else if(num[0]==-1) cout<<"-x^"<<n;
	else if(num[0]>1) cout<<num[0]<<"x^"<<n; 
	else if(num[0]==1) cout<<"x^"<<n;
	for(int i=1;i<n-1;i++)
	{
		if(num[i]<-1)  cout<<num[i]<<"x^"<<(n-i);
		else if(num[i]==-1) cout<<"-"<<"x^"<<(n-i);
		else if(num[i]==0) continue;
		else if(num[i]==1) cout<<"+"<<"x^"<<(n-i);
		else cout<<"+"<<num[i]<<"x^"<<(n-i);
	}
	if(num[n-1]<-1)  cout<<num[n-1]<<"x";
		else if(num[n-1]==-1) cout<<"-"<<"x";
		else if(num[n-1]==1) cout<<"+"<<"x";
		else if(num[n-1]>0)cout<<"+"<<num[n-1]<<"x";
		
	if(num[n]<0)  cout<<num[n];
	else if(num[n]>0) cout<<"+"<<num[n];
   
	return 0;
} 
