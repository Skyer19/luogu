#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn =10; 
struct node{
	char data;
	node* lchild;
	node* rchild;
};

char in[maxn],post[maxn];
 node* create(int postl,int postr,int inl,int inr){
 	if(postl>postr){
 		return NULL;
	 }
	 node* root = new node;
	 root->data = post[postr];
	 int k;
	 for(k=inl;k<=inr;k++){
	 	if(in[k]==post[postr]){
	 		break;
		 }
	 }
	 int numleft=k-inl;
	 root->lchild=create(postl,postl+numleft-1,inl,k-1);
	 root->rchild=create(postl+numleft,postr-1,k+1,inr);
	 return root;
 }

void PreOrderTraverse(node* root)//二叉树的先序遍历
{
    if(root==NULL)
       return;
    printf("%c",root->data);
    PreOrderTraverse(root->lchild);
    PreOrderTraverse(root->rchild);
}

int main(){
	string str1,str2;
//	cin>>str1>>str2;
	getline(cin>>str1);
    getline(cin>>str2);
	int len=str1.length();
	for(int i=0;i<len;i++){
		in[i]=str1[i];
	}
	for(int i=0;i<len;i++){
		post[i]=str2[i];
	}
	
	node* root = create(0,len-1,0,len-1);
	PreOrderTraverse(root);
	cout<<endl;
	return 0;
}


