#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	int temp,a[1000];
	cin>>n;//一共有多少个数
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=1;i++)//进行n-1轮冒泡 
	{
		for(j=0;j<i;j++)//每轮进行i次的比较 
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	 }
	 for(i=0;i<n;i++)
	 	cout<<a[i]<<" ";
	return 0; 
 } 
 
