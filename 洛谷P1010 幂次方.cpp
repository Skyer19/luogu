#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int n;
int main(){
	cin>>n;
	while(n>1){
		int point=1,i=0;
		while(1){
			if(point==n){
				cout<<i; 
				break;
			} 
			else if(point>n){
				cout<<(i-1);
				point=point>>1;
				break;
			}
			i++;
			point=point<<1;
		}		
//		cout<<point<<endl;
		n=n-point;
		cout<<n<<endl;
	}
}
