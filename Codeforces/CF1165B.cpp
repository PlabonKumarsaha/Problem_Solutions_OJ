#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
while(cin>>n)
{
   int arr[n];
   for(int i =0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);

    int ans = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] >= ans) ans++;
    }
printf("%d\n",ans-1);


}

}
