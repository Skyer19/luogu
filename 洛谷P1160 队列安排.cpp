#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

//反思：find()比在vector中寻找快 
//反思： 标注法 
int n,m;
bool del[100010];
int main(){
	int num,j;
	vector<int> v;
	v.push_back(1);
	scanf("%d",&n);
	for(int i=2;i<=n;i++){		
		scanf("%d%d",&num,&j);
		for(int k=0;k<v.size();k++){
			if(j){
				v.insert(find(v.begin(),v.end(),num)+1,i);
				break;
			}else {
				v.insert(find(v.begin(),v.end(),num),i);
				break;
			}
		}
	}
	scanf("%d",&m);
// 
	while(m--){		
		scanf("%d",&num);
		del[num]=1;
		}	
	vector<int>::iterator it; 
	for(it=v.begin();it<v.end();it++){
		if(!del[*it]){
			printf("%d ", *it);
		}
	}
// 
	cout<<endl;
	return 0;
}
 
