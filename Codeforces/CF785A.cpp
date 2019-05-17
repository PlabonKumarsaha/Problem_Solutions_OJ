#include <iostream>
#include <map>
using namespace std;

int main()
{
map<string,int>arr;

arr["Tetrahedron"] = 4;
arr["Cube"] = 6;
arr["Octahedron"]=8;
arr["Dodecahedron"]=12;
arr["Icosahedron"] = 20;


	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
    { string st;
        cin>>st;
        sum = sum+arr[st];
    }
    cout<<sum<<endl;

	return 0;
}
