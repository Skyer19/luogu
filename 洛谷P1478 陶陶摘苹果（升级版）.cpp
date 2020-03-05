#include<iostream>
#include<cmath>
using namespace std;
struct apple{
	int x;
	int y;
	int iftrue;
	
}a[5000];
int main()
{
	int n,energy,chaira,b;
	cin>>n>>energy>>chaira>>b;
	
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
		a[i].iftrue=0;
	}
	
	for(int i=n-1;i>=1;i--)
	{
		for(int j=0;j<i;j++){
			if(a[j].y>a[j+1].y) swap(a[j],a[j+1]);
		}
	}

	int k=0;
	for(int i=0;i<n;i++){
		if(chaira+b>=a[i].x)   a[i].iftrue=1;
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i].x<<" "<<a[i].y<<" "<<a[i].iftrue<<endl;
	}
	
	for(int i=0;i<n;i++){
		if(a[i].iftrue==1)   
		{
        if(energy<a[i].y)   break;
		else energy=energy-a[i].y; k++;
        }
	}
	
	cout<<k<<endl;
	return 0;
}
