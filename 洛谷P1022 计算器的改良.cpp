#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double sum,xishu,j;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='=')   j=i; break;
	}
	for(int i=0;i<j;i++){
		if((s[i]>='0'&&s[i]<='9')&&(s[i+1]>='a'&&s[i+1]<='z') ) xishu=s[i];
		else if((s[i]>='0'&&s[i]<='9')&&(s[i+1]=='+'||s[i+1]=='-'))  sum=s[i];
		else if((s[i]>='0'&&s[i]<='9')&&s[i+1]=='=')  sum=s[i];
		else if((s[i]>='0'&&s[i]<='9')&&(s[i+1]=='+'||s[i+1]=='-')&&s[i+2]=='=')  xishu=s[i];
	}
	for(int i=j;i<s.length();i++){
		if((s[i]>='0'&&s[i]<='9')&&(s[i+1]>='a'&&s[i+1]<='z'))  xishu=s[i];
		else if((s[i]>='0'&&s[i]<='9')&&(s[i+1]=='+'||s[i+1]=='-'))  sum=s[i];
		else if((s[i]>='0'&&s[i]<='9'))  sum=s[i];
		else if((s[i]>='0'&&s[i]<='9')&&(s[i+1]>='a'&&s[i+1]<='z'))  xishu=s[i];
	}
	printf("%.3lf",sum/xishu);
}
