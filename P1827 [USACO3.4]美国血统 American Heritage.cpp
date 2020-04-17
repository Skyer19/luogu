#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
char post[30];
char in[30];
char pre[30];
struct node{
	char data;
	node* lchild;
	node* rchild;
};
//��ǰ������������[preL,preR]��������������[inL,inR]
node* create(int preL, int preR, int inL, int inR){
	if(preL>preR){ //�������г���С��0������
		return NULL;
	}
	node* root = new node; //�½�һ����㣬������ŵ�ǰ�������ĸ����
	root->data = pre[preL]; //�½���������Ϊ��ǰ�������ĸ�����ֵ
	int k;
	for(k = inL; k <= inR; k++){
		if(in[k] == pre[preL]){
			break;
		}
	}
	int numLeft= k - inL;
	//��������������������[preL + 1, preL + numLeft],������������[inL, k - 1]
	//�����������ĸ����ĵ�ַ����ֵ��root����ָ��
	root->lchild = create(preL + 1, preL + numLeft, inL, k - 1);

	//��������������������[preL + numLeft + 1, preR],������������[k + 1, inR]
	//�����������ĸ����ĵ�ַ����ֵ��root����ָ��
	root->rchild = create(preL + numLeft + 1, preR, k + 1, inR);
	
	return root; 
}

void postorder(node* root){
	if(root==NULL){
		return;
	}	
	postorder(root->lchild);
	postorder(root->rchild);
	printf("%c",root->data);
}

int main(){
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length();i++){
		in[i]=s1[i];
	}
	for(int i=0;i<s2.length();i++){
		pre[i]=s2[i];
	}
	node* root = create(0, s1.length() - 1, 0, s1.length()-1); //����   ��������n
	postorder(root);
	return 0;
}
