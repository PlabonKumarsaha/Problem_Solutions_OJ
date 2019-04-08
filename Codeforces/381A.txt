#include<iostream>
#include<cstdio>
#include<algorithm>
#define printf pf
#define scanf sf
#define max 1000
using namespace std;
int arr[max];
int main()
{
long long n;
cin>>n;
for(int i =0;i<n;i++)
    cin>>arr[i];


int le =0;
int ri = n-1;
int mx=0;
int se=0,di=0;
int k=0;
while(le<=ri)
{
   if(arr[le]>=arr[ri])
   {
       mx = arr[le];
       le++;
   }
   else {
    mx = arr[ri];
    ri--;
   }
  if(k%2 == 0)
  {
      se = se + mx;
  }
  else{
    di = di +mx;
  }
  k++;
}
cout<<se << " "<<di<<endl;
}
