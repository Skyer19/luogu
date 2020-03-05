#include <iostream>
using namespace std;
int main()
{
	int n,m=1,fenzi,fenmu;
	cin>>n;
	int sum=1;
	while(sum<n){
		m++;
		sum+=m;
	}
	int rem=n-(sum-m)-1;
	if(m%2==0){
		fenzi=1;
		fenmu=m;
		while(rem--){
			fenzi++;
			fenmu--;
		}
	}else{
		fenzi=m;
		fenmu=1;
		while(rem--){
			fenzi--;
			fenmu++;
		}
	}
	cout<<fenzi<<"/"<<fenmu<<endl;
	return 0;
}
