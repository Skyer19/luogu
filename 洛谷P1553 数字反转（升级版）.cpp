#include<iostream>
using namespace std;
int main()
{
	//改Java 
	string s;
	cin>>s;
	int flag=1,j,k;//flag=1 整数   flag=2浮点数  flag=3分数  flag=4百分数   
	
	
	
	for(int i=0;i<s.length();i++){
		 if(s[i]=='.')   {
		 	flag=2;j=i;break;
		 }else if(s[i]=='/')   {
		 	flag=3;j=i;break;
		 }else if(s[i]=='%')  {
			flag=4;break;
		} 
	}
		if(flag==1){
			for(int i=s.length()-1;i>=0;i--) cout<<s[i];
		    cout<<endl;
		}else if(flag==4){	
			for(int i=s.length()-2;i>=0;i--) {
				if(s[i]!='0')  k=i; break;
			}
			
			for(int i=k;i>=0;i--){
				cout<<s[i];
			}
			cout<<"%"<<endl;
		}else if(flag==2){
			for(int i=j-1;i>=0;i--){
				if(s[i]!='0')  k=i;break;
			}
			for(int i=0;i<=k;i++){
				cout<<s[k];
			}
			cout<<".";
			k=j+1;
			for(int i=j+1;i<s.length();i++){
				if(s[i]!='0')  k=i; break;
			}
			for(int i=s.length()-1;i>k;i--){
			cout<<s[i];
		    }
			cout<<endl;	
		}else {
			k=j-1;
			for(int i=j-1;i>=0;i--){
				if(s[i]!='0')  k=i; break;
			}
			for(int i=0;i<=k;i++){
				cout<<s[k];
			}
			cout<<"/"<<endl;
			for(int i=s.length()-1;i>j;i--){
			cout<<s[i];
		    }
			cout<<endl;	
		}
		 
}
