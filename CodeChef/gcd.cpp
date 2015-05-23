#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
   if(b==0)
     return a;
    else
     return gcd(b,a%b);
}
main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}
