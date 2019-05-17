#include<bits/stdc++.h>

using namespace std;

typedef long long ll;



#define size1 105


int main() {

    
    ll tc, num, t = 1, choose;

    
    cin>>tc;

    while (tc--){
        cin>>num;
        string arr;
        cin >> arr;

        ll pos = 0, cnt = 0;

        for(ll i = 0; i < num; i++){
            if(arr[i] == '8'){
                pos = i;
                break;
            }
        }

        if(arr[0] == '8' && num >= 11){
            cout << "YES" << endl;
            continue;
        }

        ll ext = num - pos;

       // cout << ext << endl;

        if(ext >= 11 && pos > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }


    return 0;
}