#include <iostream>
#include <algorithm>
#include<vector>
#include<string.h>
#define MX 1110000
//#define long long ll
#define sf scanf
#define pf printf
int node;
using namespace std;
vector<int>graph[MX];
vector<int>counter;
long long color[MX];
long co;

void dfs_visit(long  i)
{

color[i]=2;

//cout<<x<<" "<<v1[x].size()<<endl;
for(int j =0;j<graph[i].size();j++)
{
    long x=graph[i][j];
    if(color[x]==0)
    {
        //cout<<x<<" "<<v1[i][j]<<"   ";
        dfs_visit(x);
    }
}
counter.push_back(i);
color[i]=1;


// v2.push_back(x);

}
void dfs()
{
    for(int i=0;i<node;i++)
    {
        if(color[i]==0)
        {
            dfs_visit(i);
        }
    }
}

void dfs2()
{
    memset(color,0,sizeof(color));
    long j =counter.size()-1;
    for(int i=j;i>0;i--)
    {
        if(color[counter[i]]==0)
        {
            dfs_visit(i);
            co++;
        }
    }
}


int main()
{

//cout<<"enter edge then nodes"<<endl;

long n;
cin>>n;
while(n--)
   { co =0;
       long edges;
    cin>>edges>>node;
    //n =nodes
    //m of edges
    for(int i=0;i<edges;i++)
    {
        long p,q;
        cin>>p>>q;
        graph[p].push_back(q);
    }
   /* for(int j=0;j<m;j++)
    {
        cout<<j<<" :";
        for(int k=0;k<graph[j].size();k++)
        {
            cout<<graph[j][k]<<" ";
        }
        cout<<"\n";

    }*/
    dfs();
    dfs2();
    cout<<co<<endl;

    counter.clear();
        for(int j=0;j<MX;j++)
        {
            graph[j].clear();
        }


    }
   // for(int i=1;i<v2.size();i++)
   // {
    //    cout<<v2[i]<<" ";

   // }


    return 0;
}
