#include<iostream>
#include<cstdio>
#include<algorithm>
#define max 1000009
typedef long long int ll;
using namespace std;
//ll arr[max];
//ll nar[max],mar[max];

//never forget to use long long for Online judges
ll Gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return Gcd(b, a%b);
}
int main()
{
ll n;
cin>>n;

ll x1,x2,y1,y2;
ll co =0;
ll i;
for(i=1;i<=n;i++)
{
    co =0;
   cin>>x1>>x2>>y1>>y2;

    //cout<<x<<" =x y="<<y<<endl;

   // cout<<__gcd(x,y)<<endl;

    co = Gcd(abs(x1-y1),abs(x2-y2))+1;

   // printf("Case %d: %d\n",i,co);
    printf("Case %lld: %lld\n",i,co);

}

}
