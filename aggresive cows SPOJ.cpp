#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int v1[100002];
int p,q;
bool solution(int var)
{
int st = v1[0];
int cow =1;
for(int i =0;i<p;i++)
{
    if(v1[i]-st>=var)
    {
        cow++;
        if(cow == q)
        return true;
      st = v1[i];

    }
}
return false;
}
int binarySearch()
{
    int fi =0; //0 <= xi <= 1,000,000,000)
    int la = v1[p -1];
   // cout<<"p = "<<p<<endl;
   // cout<<"la = "<<la<<endl;
    while(fi<la)
    {
        int mid = (la+fi)/2;
       // cout<<" mid in"<<mid <<endl;
        if(solution(mid))
        {
          //  cout<<" mid sol "<<mid<<endl;
            fi = mid+1;
           // cout<<"fi if ="<<fi<<endl;
        }
        else{
            la = mid;
        }
    }
  //  cout<<"fi"<<fi<<endl;
return fi-1;
}
int main()
{
int test ;
cin>>test;
while(test--)
{
    cin>>p>>q;
    for(int j=0 ;j<p;j++)
        cin>>v1[j];

     sort(v1,v1+p);

 printf("%d\n", binarySearch());



}

    return 0;
}
