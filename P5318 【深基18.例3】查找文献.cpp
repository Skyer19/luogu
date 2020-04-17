#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
bool b[100005];//����b�����ֹ�ظ���� 
vector<int> a[100005];//STL�󷨺� 

void dfs(int x,int r)//x��ʾ���ڵ㣬r��ʾʣ��δ�����ĵ� 
{
    b[x]=true;//��¼ĳ���Ѿ������ 
    if(!r)//���ÿ���㶼��������ֹ�ݹ� 
	{
        cout<<x<<' ';
        return ;
    }
    cout<<x<<' ';//��� 
    for(int i=0;i<a[x].size();i++)
    if(!b[a[x][i]]) dfs(a[x][i],r-1);//���Ҵ�x���Ե��ĵ㣬������ 
}

void bfs()
{
    queue<int> q;//����STL 
    q.push(1);b[1]=true;//��1���������У������1���Ѿ������� 
    while(!q.empty())
    {
        int s=q.front(); q.pop();//�ó������׵��Ǹ��� 
        cout<<s<<' ';//��� 
        for(int i=0;i<a[s].size();i++) if(b[a[s][i]]==false) q.push(a[s][i]),b[a[s][i]]=true;//�ѵ�s���ܵ���ĵ������Ϊ��ֹTLE���ظ��������¼�ѱ������ĵ� 
    }
}

int main()
{
	//nƪ���£�m�����ù�ϵ 
		scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) 
    {
        int x,y;
		scanf("%d%d",&x,&y);
        a[x].push_back(y);//��ͼ ��ʾx���Ե�y 
    }
    
    for(int i=1;i<=n;i++){
	//��ÿ��·��ͨ��ĵ��С�������У���Ŀ����Ҫ�� 
    sort(a[i].begin(),a[i].end());//����  
    } 
    
    for(int i=1;i<=n;i++){
    	if(!b[i]){
		dfs(i,n);//�������� ��1�㿪ʼ������n�� 
		}
	}
	
	cout<<endl;//���� 
    
//	for(int i=1;i<=n;i++) b[i]=false;//��ʼ�� 
	fill(b+1,b+n+1,false); 
    bfs();//���й��� 
    return 0;
}
