#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	int temp,a[1000];
	cin>>n;//һ���ж��ٸ���
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=n-1;i>=1;i++)//����n-1��ð�� 
	{
		for(j=0;j<i;j++)//ÿ�ֽ���i�εıȽ� 
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	 }
	 for(i=0;i<n;i++)
	 	cout<<a[i]<<" ";
	return 0; 
 } 
 
