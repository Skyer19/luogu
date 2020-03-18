#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int n;
struct node{
	string data;
	int l,r;
}tree[2222];

 void preorder(char index){
 	cout<<tree[index].data;
 	if(tree[index].l!='*') preorder(tree[index].l);
 	if(tree[index].r!='*') preorder(tree[index].r);
 }
 
 
int main(){
	cin>>n;
	char root;
	for(int i=0;i<n;i++){
		char a,b,c;
		cin>>a>>b>>c;
		   if(i==0) root=a;
		tree[a].data=a;
			tree[b].data=b;	
			tree[a].l=b;
			tree[c].data=c;	
			tree[a].r=c;
	}
	preorder(root);
	return 0;
} 


