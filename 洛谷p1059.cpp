#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
    int a[1000]={0},num,m=0,i,count=0;
    cin>>num;
    for(i=1;i<=num;i++)
    {
	int k;		
    cin>>k;
    if(a[k]>0){
	 continue;
	}
    a[k]++;
    m++;
    }
    cout<<m<<endl;
    for(i=1;i<1000;i++)
        if(a[i]>0) {
        	cout<<i<<" ";	
		} 
    cout<<endl;
    return 0;
}
