#include<iostream>
#include<cstdio>
#include<algorithm>
#define max 1000009
typedef long long int ll;
using namespace std;

int main()
{
ll n;
cin>>n;

//Regular Polygon means that every angle will be equal.Regular polygons are equiangular
//the interior angle is given to us.so if we can show that the rest of the angle is equals to 360 then
//the solution is yes.
int i;
ll angle;
for(i=1;i<=n;i++)
{
   cin>>angle;

   if(360%(180-angle) == 0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}

}
