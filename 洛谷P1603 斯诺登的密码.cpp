#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
string number[27]={"","one","two","three","four","five","six","seven",
"eight","nine","ten","elven","twelve","thirteen","fourteen","fifteen",
"sixteen","seventeen","eighteen","nineteen","twenty","a","both",
"another","first","second","third"}; 
int sz[30]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,
1,4,1,1,4,9};
int k=0,a[7];
int main()
{
	string s;
	for(int i=0;i<6;i++){
		cin>>s;
		for(int j=1;j<=26;j++){
			if(s==number[j]){
				a[++k]=sz[j];
			}
		}
	}
	if(k==0){
		cout<<0<<endl;
		return 0;
	}
	sort(a+1,a+k+1);
	for(int i=1;i<=k;i++){
		if(a[1]==0) continue;
		else if(a[i]<10&&i!=1){
			cout<<0<<a[i];
		}else{
			cout<<a[i];
		} 
	}
		

}
