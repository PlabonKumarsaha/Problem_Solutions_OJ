#include <iostream>
using namespace std;

int main()
{

    int n , ans = 0 , count = 0;
    cin >> n;
    int a[n+9];
    for(int i = 1 ; i <= n ;i++)
        cin >> a[i];
    for(int i = 1 ; i <= n ;i++)
    {
        count = 0;
        int x = a[i];
        cout<<"before while "<<x<<endl;
        cout<<"before while co "<<count<<endl;

        while(x != -1)
        {
            cout<<"in while "<<a[x]<<endl;
            x = a[x];
            count++;
            cout<<"co = "<<count<<endl;
        }
        ans = max(ans , count);
        cout<<ans<<endl;
    }
   // cout << ans+1;
    return 0;
}
