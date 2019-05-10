#include<iostream>
using namespace std;
int num;
int digits(int num)
{


    if(num/10 ==0) return num;

    else{
            int sum =0 ;
    while(num)
    {
     //cout<<++i<<" "<<sum <<" "<<num<<endl;
      sum = sum+(num%10);
      num = num/10;
     // cout<<sum<<" "<<num<<endl;
    }
 return digits(sum);
    }
  // return sum;
}
int main()
{
int ans =0;
int sum=0;
//int i=1;
while(cin>>num && num!=0)
{

cout<<digits(num)<<endl;
}

}
