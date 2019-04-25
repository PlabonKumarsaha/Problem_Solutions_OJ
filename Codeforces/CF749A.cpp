#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;
//int co=0;
cout<<n/2<<endl;
if(n%2 == 0)
{
    while(n>=2)
    {
       // cout<<n<<endl;
        cout<<2<<" ";
        n=n-2;
       // co++;
    }
    cout<<""<<endl;
}

else
{
    n = n-3;
    cout<<"3 ";
   // co=1;
  while(n>=2)
    {
       
        cout<<2<<" ";
        n=n-2;
       // co++;
    }
    cout<<""<<endl;
}
    return 0;
}