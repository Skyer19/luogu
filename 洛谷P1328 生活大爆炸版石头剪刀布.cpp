#include<iostream>
#include<cstring>
#include<algorithm>
//2020/2/7
using namespace std;
int main()
{
	int n,na,nb,counta=0,countb=0,k=-1,j=-1;
	cin>>n>>na>>nb;
	int ta[na];
	int tb[nb];
	for(int i=0;i<na;i++){
		cin>>ta[i];
	}
	for(int i=0;i<nb;i++){
		cin>>tb[i];
	}
	for(int i=0;i<n;i++){
		int a=0,b=0;
		k++;j++;
		k=k%na;	j=j%nb;	
		a=ta[k]; b=tb[j];
//		cout<<"甲"<<a<<" 乙"<<b<<" ";
		if(a==b)  {
			counta+=0;countb+=0;	
		}
		else if(a==0&&b==2||a==0&&b==3||a==1&&b==3||a==2&&b==4||a==3&&b==4||a==1&&b==0||a==4&&b==0||a==2&&b==1||a==4&&b==1||a==3&&b==2){
			counta+=1;
		}else if(a==0&&b==1||a==1&&b==2||a==2&&b==3||a==0&&b==4||a==1&&b==4||a==2&&b==0||a==3&&b==0||a==3&&b==1||a==4&&b==2||a==4&&b==3){
			countb+=1;
		}
//		cout<<" 甲得分"<<counta<<" 乙得分"<<countb<<endl;
	}
	cout<<counta<<" "<<countb<<endl;
	return 0;
} 
