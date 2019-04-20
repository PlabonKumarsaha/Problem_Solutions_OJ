#include<iostream>
#include<cstdio>
#include<algorithm>
#define max 1000009
typedef long long int ll;
using namespace std;
//ll arr[max];
//ll nar[max],mar[max];

int main()
{
int n,m;
cin>>n;
ll nar[n];
for(int i=0;i<n;i++)
    cin>>nar[i];


cin>>m;

ll mar[m];
    for(int j =0;j<m;j++)
        cin>>mar[j];

    sort(nar,nar+n);
    sort(mar,mar+m);

    //int lm = (m>n)?m : n;
    //int km = (m<n)?m : n;
int co(0);

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
          if(abs(nar[i]-mar[j])<2)
          {
            mar[j] = -5000;
             co++;

             break;
          }
        }
    }
    cout<<co<<endl;


}
