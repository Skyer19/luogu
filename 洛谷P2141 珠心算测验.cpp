#include<iostream>
#include<algorithm>
using namespace std;
int vk[n];
int main()
{
	int n;
	cin>>n;
	int a[n],count=0;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]==a[k]&&vk[k]==0)  {
				count++;
				vk[k]=1;	
				}				
			}	
		}
	}
	cout<<count<<endl;
	return 0;
}
