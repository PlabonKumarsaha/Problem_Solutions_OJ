#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
   int T;
   int a,b;
   int sum;

   cin>>T;
   for(int i=1;i<=T;i++)
   {
     cin>>a>>b;
     if( b>a)
     {
         sum=19+(b*4); //b*4 will count the total floars it had to cross

cout<<"Case "<<i<<": "<<sum<<endl;
     }
     else if(a==b)
     {
         sum=19+(b*4);
         cout<<"Case "<<i<<": "<<sum<<endl;
     }
     else if(a>b){

         sum=(19+a*4+(a-b)*4);

         cout<<"Case "<<i<<": "<<sum<<endl; //when the lift is down it has to come up first..so time counts twice
     }





   }




   }


