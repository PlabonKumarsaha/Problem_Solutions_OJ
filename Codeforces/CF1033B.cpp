#include<iostream>

#include<algorithm>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

   // return true;
}
int main()
{
int n;
cin>>n;
for(int i =0;i<n;i++)
{
    bool ans;
    ans =false;

  int a,b,c;
cin>>a>>b;
  // c= abs((a*a)-(b*b));
  int x,y;
  x=a+b;
  y=a-b;

   ans = isPrime(x);

   if(ans == true && ((y==1)) ) cout<<"YES"<<endl;
   else{cout<<"NO"<<endl;}

}



    return 0;
}
