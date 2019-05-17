#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,a,b,ck=0;
    cin>>n;

    string arr;
    cin>>arr;
    for(i=0; i<n; i++){
        if(arr.compare(i, 3, "xxx")==0)
            ck++;
    }
    cout<<ck<<endl;
}