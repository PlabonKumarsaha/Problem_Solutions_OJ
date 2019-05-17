#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <queue>
#define MAX 100005
using namespace std;

queue<int>Q;
vector<int>graph[MAX];
int color[MAX];

int node,edges;
bool BFS()
{
    for(int i=0;i<node;i++)
        {color[i]=-1;}


  Q.push(0);
  color[0]=1;

bool check = true;
   while(!Q.empty() && check){

      int fr = Q.front();
   Q.pop();
  for(int i=0;i<graph[fr].size();i++)
  {
      int next =graph[fr][i];
     // Q.push();

      if(color[next]== -1)
      {
          Q.push(next);
          color[fr] =0;
          color[next]=1 ;

      }
      else if(color[next]==color[fr])
      {
          check = false;
          break;
      }

  }
   }
return check;
}
int main()
{

while(cin>>node){
cin>>edges;


for(int i=0;i<edges;i++)
{
    int a,b;
    cin>>a>>b;
    graph[a].push_back(b);
    graph[b].push_back(a);

}
if(BFS()) cout<<"BICOLORABLE."<<endl;
else{ cout<<"NOT BICOLORABLE."<<endl; }

for(int i=0;i<201;i++)
        {
            graph[i].clear();
        }
}
    return 0;
}
