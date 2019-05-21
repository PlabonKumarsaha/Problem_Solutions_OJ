#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int co=0;
  cin>>n;
co = co +(n/5);
n = n%5;
co = co +(n/4);
n = n%4;
co = co +(n/3);
n = n%3;
co = co +(n/2);
n = n%2;
co = co +(n/1);
n = n%1;




cout<<co<<endl;
    return 0;
}
