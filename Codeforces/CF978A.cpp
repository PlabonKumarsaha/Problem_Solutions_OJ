#include <bits/stdc++.h>
#include <queue>
#include <vector>
#define MAX 1000
using namespace std;

int arr[MAX];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
          }
        }
    }
    int co=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0)
            co++;
    }

    cout<<co<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]>0)
         printf("%d ", arr[i]);
    }
}

