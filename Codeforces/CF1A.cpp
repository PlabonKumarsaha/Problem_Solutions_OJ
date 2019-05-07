#include<iostream>
#include<math.h>
#include<algorithm>

#define LL long long int

using namespace std;

int main()
{

double a,b,c;
	//iosbase;
	cin>>a>>b>>c;
	double d1,d2;
	d1 = ceil(a/c);
	d2 = ceil(b/c);

    LL ans= (LL)(d1 * d2);
    cout<<ans<<endl;


}
