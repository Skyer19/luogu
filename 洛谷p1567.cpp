#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=1,max=-1;
	int a;
	cin>>a;
	n=n-1;
	while(n--)
	{
		int b;
		cin>>b;
		if(b>a)
		{
			sum++;
		}
		else
		{
			if(sum>max)  max=sum;
			sum=1;
		}
		a=b;
//		cout<<sum;
	}
	cout<<max;
	return 0;
}
