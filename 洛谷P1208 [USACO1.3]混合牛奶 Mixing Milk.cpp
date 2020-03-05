#include<iostream>
#include<algorithm>
#include<cstring>
//2020/2/10
int b[30000];
using namespace std;
struct man{
	int pay;
	int amount;
}a[5000]; 
bool com(const man b,const man c){
	return b.pay<c.pay;
}
int main()
{
	int sum,people,count,num=0;
	cin>>sum>>people;
	for(int i=0;i<people;++i){
		cin>>a[i].pay>>a[i].amount;
	}
	sort(a,a+people,com);
//	for(int i=0;i<people;++i){
//		cout<<i<<" "<<a[i].pay<<" "<<a[i].amount<<endl;
//	}
	if(people!=0&&sum!=0){
	for(int i=0;i<people;++i){
		if((sum-num)>=a[i].amount){
			num+=a[i].amount;
			count+=a[i].amount*a[i].pay;
		}else {
			count+=a[i].pay*(sum-num);	
			num+=(sum-num);			
			break;		
		}	
	}
	cout<<count<<endl;
}else{
	cout"0"<<endl;
}
	return 0;
}
