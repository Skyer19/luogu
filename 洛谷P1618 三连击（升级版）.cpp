#include<iostream>
using namespace std;
int main()
{
	int aa[10],flag=0,count=0;
	int a,b,c,num1,num2,num3;
	cin>>a>>b>>c;
	for(int i=122;i<=333;i++){
		num1=i;
		num2=i*b/a;
		num3=i*c/a;
//		cout<<num1<<" "<<num2<<" "<<num3<<endl;
		aa[num1/10%10]++;
		aa[num1%10]++;
		aa[num1/100%10]++;

		aa[num2/10%10]++;
		aa[num2%10]++;
		aa[num2/100%10]++;
	
		aa[num3/10%10]++;
		aa[num3%10]++;
		aa[num3/100%10]++;
	 
//	 for(int k=1;k<=9;k++){
//		cout<<aa[k]<<" "; 
//	}
//	 
	 
	 
	for(int k=1;k<=9;k++){
		if(aa[k]>1||aa[k]==0) {
			flag=1; 
		    break;	
		} 
	}
	
		if(flag==0){
		
			cout<<num1<<" "<<num2<<" "<<num3<<endl;
			count=1;
		}
		flag=0;
        for(int k=0;k<=9;k++){
		      aa[k]=0;
	}
   }
	if(count==0)  cout <<"No!!!";
	return 0;
}

