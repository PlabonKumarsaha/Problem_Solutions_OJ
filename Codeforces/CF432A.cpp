
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k,cnt = 0;
cin>>n>>k;
int arr[n];
for(int i = 0 ;i<n;i++)
    {cin>>arr[i];}
  for(int j = 0;j<n;j++)
  {
      // same team will participate k times so their exp should be less or equals to k

if(5-arr[j]>=k){
    cnt++;
// cout<<"5 - arr "<<5-arr[j]<<"  cnt = "<<cnt<<endl;
    }

  }

  //divided by 3 cz each team has 3 players
cout<<cnt/3<<endl;
}
