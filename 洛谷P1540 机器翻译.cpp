#include<iostream>
#include<cstring>
#include<algorithm>
//2020/2/7
using namespace std;
int main()
{
	int m,n,count=0,k=-1;
	cin>>m>>n;
	int mem[m];
	int num[n];
	memset(mem,-1,sizeof(mem));
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n;i++){
		int flag=1;
		for(int j=0;j<m;j++){
			if(num[i]==mem[j]){	
			   flag=0;
				break;
			}
		}
			if(flag==1){			
				k++;
				k=k%m;
				mem[k]=num[i];
				count++;
			}
							
	}

	 cout<<count<<endl; 
	return 0;
}
