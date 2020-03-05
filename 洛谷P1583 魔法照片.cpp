#include<iostream>
#include<algorithm>
using namespace std;
int E[11];
struct people{
	int id;
	int quanzhi;
}a[20007];

//bool com1(people s1,people s2)
//{
//	return s1.quanzhi>s2.quanzhi;
//}
bool com2(people s1,people s2)
{
	if(s1.quanzhi!=s2.quanzhi) {
		return s1.quanzhi>s2.quanzhi;
	}
	else return s1.id<s2.id;
}
int main()
{
	int n,k;
	cin>>n>>k;

	 for(int i=1;i<=10;i++){
	 	cin>>E[i];
	 }
	 for(int i=1;i<=n;i++){
	 	a[i].id=i;
	 cin>>a[i].quanzhi;	
	 }
	 
	 sort(a+1,a+n+1,com2);

	 for(int i=1;i<=n;i++){
	 	a[i].quanzhi+=E[(i-1)%10+1];
	 }
//	 cout<<endl;
//	 cout<<endl;
//	 for(int i=1;i<=n;i++){
//	 	cout<<"quanzhi"<<a[i].quanzhi<<" "<<"id"<<a[i].id<<endl;
//	 }
//	 cout<<endl;
//	 cout<<endl;
	 sort(a+1,a+n+1,com2);
	 
	 for(int i=1;i<=k;i++){
	 	cout<<a[i].id<<" ";
	 }
	 return 0;
	 
}
