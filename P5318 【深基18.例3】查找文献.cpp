#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m;
bool b[100005];//定义b数组防止重复输出 
vector<int> a[100005];//STL大法好 

void dfs(int x,int r)//x表示所在点，r表示剩余未遍历的点 
{
    b[x]=true;//记录某点已经输出过 
    if(!r)//如果每个点都遍历过终止递归 
	{
        cout<<x<<' ';
        return ;
    }
    cout<<x<<' ';//输出 
    for(int i=0;i<a[x].size();i++)
    if(!b[a[x][i]]) dfs(a[x][i],r-1);//查找从x可以到的点，并遍历 
}

void bfs()
{
    queue<int> q;//还是STL 
    q.push(1);b[1]=true;//把1点放入队列中，并标记1点已经遍历过 
    while(!q.empty())
    {
        int s=q.front(); q.pop();//拿出队列首的那个点 
        cout<<s<<' ';//输出 
        for(int i=0;i<a[s].size();i++) if(b[a[s][i]]==false) q.push(a[s][i]),b[a[s][i]]=true;//把点s所能到达的点遍历，为防止TLE和重复输出，记录已遍历过的点 
    }
}

int main()
{
	//n篇文章，m条引用关系 
		scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) 
    {
        int x,y;
		scanf("%d%d",&x,&y);
        a[x].push_back(y);//建图 表示x可以到y 
    }
    
    for(int i=1;i<=n;i++){
	//把每条路所通向的点从小到大排列（题目中有要求） 
    sort(a[i].begin(),a[i].end());//快排  
    } 
    
    for(int i=1;i<=n;i++){
    	if(!b[i]){
		dfs(i,n);//进行深搜 从1点开始，进行n次 
		}
	}
	
	cout<<endl;//换行 
    
//	for(int i=1;i<=n;i++) b[i]=false;//初始化 
	fill(b+1,b+n+1,false); 
    bfs();//进行广搜 
    return 0;
}
