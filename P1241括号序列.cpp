#include<cstdio>
#include<iostream>
#include<cstring>
#include<stack>
#include<algorithm>
using namespace std;
char c[105],b[105];
stack<char> s;
int main(){
	scanf("%s",c);
	int len=strlen(c);
	for(int i=0;i<len;i++){
		if(c[i]=='('){s.push(i);b[i]=')';}
		else if(c[i]=='['){s.push(i);b[i]=']';}
		
		else if(!s.empty()){     //Åöµ½£©] 
			if(c[s.top()]=='('&&c[i]==')'){
				b[s.top()]='*';
				s.pop();
				b[i]='*';
			}
			else if(c[s.top()]=='['&&c[i]==']'){
				b[s.top()]='*';
				b[i]='*';
				s.pop();
			}
		}
		else {
		if(c[i]==')'){b[i]='(';}
		else if(c[i]==']'){b[i]='[';}	
			
		}
	}
	for(int i=0;i<len;i++){
		if(b[i]=='*'){
			cout<<"i= "<<i<<" ";
			printf("c[i]=%c",c[i]);
			printf("b[i]=%c\n",b[i]);
		}else{
			cout<<"i= "<<i<<" ";
			printf("c[i=]%c",c[i]);
			printf("b[i]=%c\n",b[i]);
		}
	}
	printf("\n");
	for(int i=0;i<len;i++){
		if(b[i]=='*'){
//			cout<<"i= "<<i<<" ";
			printf("%c",c[i]);
		}else if(c[i]=='('||c[i]=='['){
//			cout<<"i= "<<i<<" ";
			printf("%c",c[i]);
			printf("%c",b[i]);
		}else if(c[i]==')'||c[i]==']'){
//			cout<<"i= "<<i<<" ";
			printf("%c",b[i]);
			printf("%c",c[i]);
		
		}
	}
	return 0;
}
