#include<bits/stdc++.h>
using namespace std;
int arr[1000000];

int main() {
    set<string>SET;
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string s1,s2;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            {cin>>s1>>s2;
        SET.insert(s1);
        SET.insert(s2);
        arr[i] = SET.size();
            }
       for(int j=0;j<n;j++)
       {
           cout<<arr[j]<<endl;
       }
    }
	return 0;
}

 