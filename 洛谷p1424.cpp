#include<iostream>
using namespace std;
int main()
{
	int a[8]={0,7,6,5,4,3,2,1};
	int b[8]={0,1,2,3,4,5,5,5};//对于最后剩下的几天 
	int c[8]={0,5,4,3,2,1,0,0};
	int n,day,month,sum,remday;
	cin>>n>>day;
	month=(day-a[n])/7;
	remday=(day-a[n])%7; 
	sum=c[n]*250+month*250*5+b[remday]*250;
	cout<<sum<<endl;
	return 0;
}
