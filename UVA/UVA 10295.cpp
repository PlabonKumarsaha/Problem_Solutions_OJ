#include <bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int m,n;
    cin>>m>>n;
    long long int total =0;
     int val;
    string st;
    for(int i=0;i<m;i++)
    {
       cin>>st>>val;
        mp[st]= val;
    }
    for(int i=0;i<n;i++)
    {
        total = 0;
        string text;

        while(1)
        {
            cin>>text;
            if(text == ".")
                break;

        total=total + mp[text];

        }
        cout<<total<<endl;
    }

    return 0;
}
