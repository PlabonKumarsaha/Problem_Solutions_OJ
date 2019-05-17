#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
string arr;
cin>>arr;
int cnt =0;

for(int i = 0; i < n; i++){
        if(arr[i] == '+') cnt++;
        else {
            cnt--;
        }if(cnt<0){cnt = 0;}
}

cout<<cnt<<endl;
return 0;
}


