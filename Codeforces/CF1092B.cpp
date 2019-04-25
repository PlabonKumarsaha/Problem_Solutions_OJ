#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int>vec(n);
for(int i=0;i<n;i++)
    cin>>vec[i];


sort(vec.begin(),vec.end());

int co=0;

for(int i =1;i<n;i=i+2)
{
    co =co +(vec[i]-vec[i-1]);
}

cout<<co<<endl;

    return 0;
}
