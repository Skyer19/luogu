#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int alltree,num,count=0;
	cin>>alltree>>num;
	int tree[alltree+1]={1};
	cout<<alltree<<" "<<num;
	memset(tree,1,sizeof(tree));
	for(int j=0;j<num;j++)
	{	
		int a,b;	
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			tree[i]=0;
		}		  
	}

	for(int k=0;k<=alltree;k++){
	if(tree[k])  count++;
	}
	cout<<count<<endl;
	return 0;
 } 
