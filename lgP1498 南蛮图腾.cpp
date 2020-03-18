#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n;
char cha[9999][9999];
void solve(int x,int y,int n){
	if(n==1){
		cha[x][y]='/';
		cha[x][y+1]='_';
		cha[x][y+2]='_';
		cha[x][y+3]='\\';
		cha[x-1][y+1]='/';
		cha[x-1][y+2]='\\';
		return;
	}
	solve(x,y,n-1);
	solve(x,y+(1<<n),n-1);
	solve(x-(1<<(n-1)),y+(1<<(n-1)),n-1);
}
int main(){
	cin>>n;
	solve(pow(2,n),1,n);
	for(int i=1;i<=pow(2,n);i++){
		for(int j=1;j<=pow(2,n+1);j++){
			if(cha[i][j]!=0){
				cout<<cha[i][j];
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
} 
