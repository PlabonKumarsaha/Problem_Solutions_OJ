#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
//int arr[1000];
int main()
{

 int n,m,d;

    while (cin>>n>>m)
    {
        if (m % n != 0)
            printf("-1");
        else
        {
            d = m/n;

            int k = 1,p = 0;

            while (d)
            {
                if (d == 1)
                    break;

                if (d % 2 == 0)
                {
                    d /= 2;
                    ++p;
                }
                else if (d % 3 == 0)
                {
                    d /= 3;
                    ++p;
                }
                else
                {
                    k = 0;
                    printf("-1");
                    break;
                }
            }

            if (k)
                printf("%d",p);
        }

        printf("\n");
    }

}
