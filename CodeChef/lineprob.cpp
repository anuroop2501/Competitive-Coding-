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
    int t,x,y,X,Y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>X>>Y;
        x = abs(x-X);
        y = abs(y-Y);
        X = gcd(x,y);
        Y = x+y-X;
        cout<<Y<<endl;
    }
}
