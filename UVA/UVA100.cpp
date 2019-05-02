#include <iostream>
#include <algorithm>
#define long long ll

using namespace std;

int main()
{
    int i,j;

    while ( cin>>i>>j) {

       // int tempi = i;
       // int tempj = j;
       cout<<i<<" "<<j<<" ";

        if ( i > j ) swap (i, j);


        int mx =0;

        int ln =0;

        while ( i <= j ) {
            unsigned int n = i;
            ln = 1;

            while ( n != 1 ) {
                if ( n % 2==1 ) n = 3 * n + 1;

                else n /= 2;

                ln++;
            }

            if ( ln > mx )
                mx = ln;

            i++;
        }

        cout<<mx<<endl;
    }

    return 0;
}
