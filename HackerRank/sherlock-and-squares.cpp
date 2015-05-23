#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int t,i,c,a1;
    long int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        a1 = sqrt(a);
        b = sqrt(b);
        if(a1*a1<a)
            a = a1+1;
        else
            a=a1;
        c=0;
        for(i=a;i<=b;i++)
            c++;
        cout<<c<<endl;
    }
}
