#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
string s[22];
bool comp( string a,string b){
	return a+b>b+a;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,comp);
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
	return 0;
}
