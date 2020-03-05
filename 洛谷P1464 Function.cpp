#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>
#include<iomanip>
using namespace std;
typedef long long ll;
ll f[30][30][30];
int a,b,c;
int w(ll a,ll b,ll c){
	if(a<=0||b<=0||c<=0) return 1;
	else if(a>20||b>20||c>20) return w(20,20,20);
	else if(f[a][b][c]!=0)  return f[a][b][c];
	else if(a<b&&b<c){
		f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	 }else {
	 	f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	 }
	 return f[a][b][c]; 
}
int main()
{
	while(cin>>a>>b>>c){
	if(a==-1&&b==-1&&c==-1){
	return 0;	
	}
	cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
}
