#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int arr[100090];
int main()
{
int num;

while(cin>>num)
{for(int i=0;i<num;i++)
{
    cin>>arr[i];
}
sort(arr,arr+num);
bool result = false;
for(int j =0;j<num-2;j++)
{
    if(arr[j+2]< arr[j]+arr[j+1])
        result = true;
}

if (result) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
}
