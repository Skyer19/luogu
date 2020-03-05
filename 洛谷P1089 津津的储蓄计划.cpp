#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[13],summom=0,money=0;
	for(int i=1;i<=12;i++)
	{
		cin>>a[i];	
		}	
	for(int i=1;i<=12;i++)
	{
		money=money+300;
		if((money-a[i])>=100){
			int rem=(money-a[i])/100*100;
			summom=summom+rem;
			money=money-rem-a[i];
		}else if((money-a[i])<0){
			cout<<"-"<<i<<endl;
			return 0;
		}else{
			money=money-a[i];	
		}	
	}
	summom=summom*1.2+money;
	cout<<summom<<endl;
	return 0;
}
