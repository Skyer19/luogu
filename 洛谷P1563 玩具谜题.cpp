#include<iostream>
#include<cmath>
using namespace std;
struct people{
	int circle;
	string s;
}s[100000];
int main()
{
	int n,m;//n:小人个数   m:指令个数  
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i].circle>>s[i].s;
	}
	int k=0;
	for(int i=0;i<m;i++){  //0:向左数   1：向右数 
		int inst,num;
		cin>>inst>>num;
		if(s[k].circle==0&&inst==0){  
			int rem=num%n;
			k=k-rem;
			if(k<0){
				k=n+k;
			}
		}else if(s[k].circle==0&&inst==1){
			int rem=num%n;
			k=k+rem;
			if(k>(n-1)){
				k=k-n;
			}
		}else if(s[k].circle==1&&inst==0){
			int rem=num%n;
			k=k+rem;
			if(k>(n-1)){
				k=k-n;
			}
		}else if(s[k].circle==1&&inst==1){
			int rem=num%n;
			k=k-rem;
			if(k<0){
				k=k+n;
			}
		}
	}
	cout<<s[k].s<<endl;
	return 0;
}
