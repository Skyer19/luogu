#include<iostream>
using namespace std;
int main()
{
	for(int i=100;i<=333;i++)
	{
		int a=i/100;
		int b=i/10/10;
		int c=i%100;
		if(a==0||b==0||c==0)continue;
		
			cout<<i<<" "<<2*i<<" "<<3*i<<endl;
	}
	return 0;
} 
