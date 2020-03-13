#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
void f(int a){
	int i,j;
	if(a==0) return;
	else if(a==1) {
		cout<<2<<"("<<0<<")";
		a=a-1;
	}
	else if(a==2) {
		cout<<2;
		a=a-2;
	}	
	else if(a>0){	 
		j,i=1;
		while(a>=i){
			i=i<<1; 
			j++;
		}
		j=j-1;
		i=i/2;
		cout<<2<<"(";
		f(j);
		cout<<")";	
	}
	if(a-i>0) cout<<"+";
		f(a-i);
}
int main(){
	scanf("%d",&n);
	f(n);
}
