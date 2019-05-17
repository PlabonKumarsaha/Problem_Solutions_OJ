#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
int a[maxn];
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
            break;
    }
    for(;i<n;i++)
    {
        if(a[i]!=a[i-1])
            break;
    }
    for(;i<n;i++)
    {
        if(a[i]>=a[i-1])
            break;
    }
    if(i==n)
        puts("YES");
    else
        puts("NO");
    return 0;
}
