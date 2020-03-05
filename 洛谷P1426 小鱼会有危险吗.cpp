#include<iostream>
using namespace std;
int main()
{
	double s,x=0,sum=0,temp=7;
	cin>>s>>x;
	while(sum<s-x){	
		sum=sum+temp;
		temp=temp*0.98;
	}
	if(sum+temp*0.98<s+x){
		cout<<"y"<<endl;
	}else {	
		cout<<"n"<<endl;
	}
}
