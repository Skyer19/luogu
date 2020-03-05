#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	n=n-4;
	int a[10]={6,2,5,5,4,5,6,3,7,6,4,};
	for(int i=0;i<=24;i++)
	{
		for(int j=0;j<=24;j++)
		{
			if(a[i]+a[j]==a[n-i-j])
			{
				if(i+j==(n-i-j))
				{
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
