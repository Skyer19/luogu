#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
//2020/2/9
struct letter{
	int check;
	char mia;
	char yuana;
}a[27];
bool comp(const letter c,const letter e)
{
    return c.mia<e.mia;
}
int main()
{
	string mi;
	string yuan;
	string message;
	cin>>mi>>yuan>>message;
//	cout<<mi<<endl;
//	cout<<yuan<<endl;
//cout<<mi.length()<<endl;
	for(int i=0;i<mi.length();i++){
//		cout<<yuan[i]-'A'+1<<" "<<yuan[i]<<" "<<mi[i]<<endl;
		if(a[yuan[i]-'A'+1].yuana==0){
			a[yuan[i]-'A'+1].yuana=yuan[i];
			a[yuan[i]-'A'+1].mia=mi[i];
			a[yuan[i]-'A'+1].check ++;   			
		}else if((a[yuan[i]-'A'+1].mia!=mi[i])){
			a[yuan[i]-'A'+1].check ++;
		} 		
	}
	
//	for(int i=1;i<27;i++){
//		cout<<a[i].yuana<<" "<<a[i].mia<<" "<<a[i].check<<endl;
//	}
	for(int i=1;i<27;i++){
		if(a[i].check!=1){
			cout<<"Failed"<<endl;
			return 0;
		}
	}
	sort(a+1,a+27,comp);
//	cout<<endl;
//	for(int i=1;i<27;i++){
//		cout<<a[i].yuana<<" "<<a[i].mia<<" "<<a[i].check<<endl;
//	}
	
	for(int i=0;i<message.length();i++){
		cout<<a[message[i]-'A'+1].yuana;
	}
 } 
