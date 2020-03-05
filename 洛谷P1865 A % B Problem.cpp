#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n,m,l,r,count,i,j,k;
	cin>>n>>m;
//	scanf("%d %d",&n,&m);
	scanf("%d%d",&n,&m);
	while( n--) {
		cin>>l>>r;
		count=0;
		int flag=0;
		if((r<1||r>m)||(l<1||l>m)) {
			cout<<"Crossing the line"<<endl;
			continue;
		} else {
			for(i=l; i<=r; ++i) {
				if(i==1)  continue;
				for(j=2; j*j<=i; ++j) {
					if(i%j==0) {
						flag=1;
						break;
					}
				}
				if(flag==0) {
					count++;
//					cout<<i<<" ";
				} else {
					flag=0;
				}
			}
			printf("%d\n",count);
			
		}
	}

}
