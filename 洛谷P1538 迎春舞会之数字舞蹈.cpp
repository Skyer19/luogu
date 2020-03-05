#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
//2020/2/10
using namespace std;
int main()
{

    int k,flag=0;
    cin>>k;
    string s;
    cin>>s;
//    for(int i=0;i<s.length();i++){
//    	cout<<s[i]<<" ";
//	}
//	cout<<endl;
   //第一部分
   
   for(int i=0;i<s.length();i++){
   	if(i!=0){cout<<" ";}
   		cout<<" ";
   		for(int j=0;j<k;j++){
   			if(s[i]!='1'&&s[i]!='4'){
   			cout<<"-";
		   }else{
		   	cout<<" ";
		   }		  	   
   		}
		cout<<" "; 	
	}
	cout<<endl;
	//第二部分
	for(int j=0;j<k;j++){
	for(int i=0;i<s.length();i++){
	if(i!=0){cout<<" ";}
		if(s[i]=='5'||s[i]=='6'){
		cout<<"|";
		for(int m=0;m<k;m++){
			cout<<" ";
		}
		cout<<" ";	
		}else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='7'){
			cout<<" ";
			for(int m=0;m<k;m++){
				cout<<" ";
			}
			cout<<"|";
		}else{
			cout<<"|";
			for(int m=0;m<k;m++){
				cout<<" ";
			}
			cout<<"|";
		}
		
	
	}
	cout<<endl;
	}
	//第三部分
	for(int i=0;i<s.length();i++){
		if(i!=0){cout<<" ";}
		cout<<" ";
		for(int m=0;m<k;m++){		
		if(s[i]!='1'&&s[i]!='7'&&s[i]!='0'){
			cout<<"-";
			}else{
				cout<<" ";
			}
		}
		cout<<" ";						
	}
	cout<<endl;
	//第四部分	
	for(int j=0;j<k;j++){
		for(int i=0;i<s.length();i++){
			if(i!=0) cout<<" ";
			
			if(s[i]=='2'){
				cout<<"|";
				for(int m=0;m<k;m++){
					cout<<" ";
				}
				cout<<" ";
			}else if(s[i]=='6'||s[i]=='8'||s[i]=='0'){
				cout<<"|";
				for(int m=0;m<k;m++){
					cout<<" ";
				}
				cout<<"|";
			}else{
				cout<<" ";
				for(int m=0;m<k;m++){
					cout<<" ";
				}
				cout<<"|";
			}
			
		}
		cout<<endl;
	}
	//第五部分
	for(int i=0;i<s.length();i++){
		if(i!=0)  cout<<" ";
   		cout<<" ";
   		for(int j=0;j<k;j++){
   			if(s[i]!='1'&&s[i]!='4'&&s[i]!='7'){
   			cout<<"-";
		   }else{
		   	cout<<" ";
		   }		  	   
   		}
		cout<<" "; 
	}
		
}


