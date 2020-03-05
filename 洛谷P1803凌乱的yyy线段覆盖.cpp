#include<iostream>
#include<algorithm>
#include<cstring>
//2020/2/10
int b[30000];
using namespace std;
struct match{
	int start;
	int end;
//	int time; 
}a[1000000];
bool comp(const match b,const match c ){
//	if(b.start==c.start)  return b.time<c.time;
	 return b.end<c.end;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i].start>>a[i].end;
		a[i].time=a[i].end-a[i].start;
	}
	sort(a,a+n,comp);
//	for(int i=0;i<n;i++){
//		cout<<a[i].start<<" "<<a[i].end<<" "<<a[i].time<<endl;
//	}
//	cout<<endl<<endl;
//	
	int count=1;
	int endtime=a[0].end;
	for(int i=1;i<n;++i){
		if(a[i].start>=endtime){
			count++;
			endtime=a[i].end;
		}
	}
	
	cout<<count<<endl;
	return 0;
	
	
} 
