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
//当前先序序列区间[preL,preR]，中序序列区间[inL,inR]
node* create(int preL, int preR, int inL, int inR){
	if(preL>preR){ //先序序列长度小于0，返回
		return NULL;
	}
	node* root = new node; //新建一个结点，用来存放当前二叉树的根结点
	root->data = pre[preL]; //新结点的数据域为当前二叉树的根结点的值
	int k;
	for(k = inL; k <= inR; k++){
		if(in[k] == pre[preL]){
			break;
		}
	}
	int numLeft= k - inL;
	//左子树的先序序列区间[preL + 1, preL + numLeft],中序序列区间[inL, k - 1]
	//返回左子树的根结点的地址，赋值给root的左指针
	root->lchild = create(preL + 1, preL + numLeft, inL, k - 1);

	//右子树的先序序列区间[preL + numLeft + 1, preR],中序序列区间[k + 1, inR]
	//返回左子树的根结点的地址，赋值给root的右指针
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
	node* root = create(0, s1.length() - 1, 0, s1.length()-1); //建树   结点个数：n
	postorder(root);
	return 0;
}
