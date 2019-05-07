#include<iostream>
using namespace std;
int arr[1000005];
int n,m;
int BinarySearch(int num)
{
    int ret =-1;
   int high = n-1;
   int low =0;
   while(low <= high)
   {
       int mid =(high+low)/2;

       if(arr[mid] == num) {ret = mid;
       high = mid-1;
       }

       else if(arr[mid]>num)
       {
           high = mid -1;
       }
       else if(arr[mid] < num)
        {low = mid + 1;}
   }
    return ret;
}
int main()
{

int k;
cin>>n>>m;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int j =0;j<m;j++)
{
    cin>>k;
   cout<<BinarySearch(k)<<endl;
}

}
