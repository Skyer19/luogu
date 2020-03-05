#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int array[15];
int n;
int b[15];
void print()
{
//	printf("1");
	for(int i=1;i<=n;i++){
		cout<<setw(5)<<array[i];
	}
	cout<<endl;
}
void dfs( int k)
{
	if(k==n){
	
		print();
		return;
	}
		for(int i=1;i<=n;i++)
		{
			if(b[i]==0)
			{
				b[i]=1;
				array[k+1]=i;
				dfs(k+1);
				b[i]=0;
			}
		}
	
}


int main()
{
	cin>>n;
	dfs(0);
	return 0;
}
