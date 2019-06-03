#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
bool visited[1000];
int co,n;
void dfs(int s)
{
    if(visited[s]) return;

    visited[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        int x=adj[s][i];
        if(!visited[x]){
            dfs(x);
        }
    }

}

void dfs_visit()
{
  for(int i=0;i<n;i++)
  {
      if(!visited[i])
            {
                dfs(i);
                co++;
            }
  }

}

int main() {
    int u,v;
    char c[2];
    char s[5];
	int test;
	cin>>test;

	for(int i=0;i<=test;i++)
    {
        gets(c);
        n =c[0]-64;
       // cin>>s;
            while(gets(s)){
            if(s[0]=='\0')
                break;
            u=s[0]-65;
            v=s[1]-65;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        co =0;
        memset(visited,0,sizeof(visited));
        dfs_visit();
        cout<<co<<endl;
        for(i=0;i<n;i++)
            adj[i].clear();




    }
	return 0;
}
