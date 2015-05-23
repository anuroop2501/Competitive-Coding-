#include<iostream>
using namespace std;
main()
{
    int t,n,tri;
    cin>>t;
    while(t--)
    {
        cin>>n;
        tri=0;
        tri = ((4*n)*(4*n-1)*(4*n-2))/6;
        tri=tri - (4*(n*(n-1)*(n-2)))/6;
        cout<<tri<<endl;
    }
}
