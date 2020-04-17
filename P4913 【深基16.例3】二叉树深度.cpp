#include<bits/stdc++.h>
using namespace std;
struct node{
	int layer;
	int lchild;
	int rchild;
}tree[100005];
int n; 
int layermax=1;
void LayerOrder(int index){
	queue<int> q;
	tree[index].layer = 1;
	q.push(index);
	while(!q.empty()){
		int now = q.front();
		layermax=max(tree[now].layer,layermax);
		q.pop();
		if(tree[now].lchild!= 0) {
			int child=tree[now].lchild;
			tree[child].layer = tree[now].layer + 1; //左孩子的层号为当前层号+1
			q.push(child);		
		}
		if(tree[now].rchild!= 0) {
			int child=tree[now].rchild;			
			tree[child].layer = tree[now].layer + 1; //右孩子的层号为当前层号+1
			q.push(child);
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&tree[i].lchild);
		scanf("%d",&tree[i].rchild);
	}
	LayerOrder(1);
	cout<<layermax<<endl;
}
