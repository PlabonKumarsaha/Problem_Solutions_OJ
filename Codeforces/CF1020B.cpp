#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string.h>

#define max 1000009
typedef long long int ll;
using namespace std;
vector<int>v[1005];
int visited[1005];
int BFS(int s)
{
    int b,u;
   memset(visited,0,sizeof(visited));

   queue<int>Q;
   Q.push(s);

   visited[s]=1;

   while(!Q.empty())
   {

        u = Q.front();
       Q.pop();

       for(int i=0;i<v[u].size();i++)
       {
            b = v[u][i];
           if(!visited[b])
           {
              visited[b]=1;
              Q.push(b);

           }


       }
   }
   return b;

}
int main()
{

int n;
while(cin>>n)
{
    int p;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        v[i].push_back(p);

    }

    for(int i=1;i<=n;i++)
    {
        cout<<BFS(i)<<" ";
    }
    cout<<endl;

}
}
