#include<iostream>
#include<cstdio>
using namespace std;
bool a[30];//每一列
int  num[30];
bool b[30];//主对角线 
bool c[30];//副对角线 
int sum;
int n;
void print()
{
	if(sum<4){
		for(int i=1;i<=n;i++){
			cout<<num[i]<<" ";
		}
		cout<<endl;
	}
}

void dfs(int k) 
{
	if(k>n){
		sum++;
		print();
		return;
	}else{
		for(int i=1;i<=n;i++){  
			if(!a[i]&&!b[k-i+n]&&!c[k+i]){
				a[i]=1;
				b[k-i+n]=1;
				c[k+i]=1;
				num[k]=i;
				dfs(k+1);
				a[i]=0;
				b[k-i+n]=0;
				c[k+i]=0;
			}
			
		}
	}
}
int main()
{
	cin>>n;
	dfs(1);
	cout<<sum<<endl;
	return 0;
}
