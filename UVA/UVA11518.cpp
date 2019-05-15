#include <stdio.h>
#include <algorithm>
#include <vector>
#define MAX 10005

using namespace std;

vector <int> graph[MAX];
int co;
int color[MAX];

void dfs_visit(int u)
{
	co++;
//printf("%d %d",u,co);
	//cout<<u<<" "<<co<<endl;

	color[u] = 1;
	for(int i = 0; i < graph[u].size(); i++){
            int x= graph[u][i];
		if(color[x]==0)
			{dfs_visit(x);}
	}
}

int main()
{
	int T, n, m, l, x, y, z;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d %d", &n, &m, &l);
		while(m--){
			scanf("%d %d", &x, &y);
			graph[x].push_back(y);
		}
		while(l--){
			scanf("%d", &z);
			if(!color[z])
				dfs_visit(z);
		}
		//for(int i=1;i<=n;i++)
       // {
       //     printf("%d %d",i,color[i]);
       // }

		printf("%d\n", co);
		co = 0;
		fill(color, color + MAX, 0);
		for(int i = 0; i < n; i++){
			graph[i].clear();
		}
	}

	return 0;
}
