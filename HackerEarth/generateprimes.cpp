#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i == 0)
           return false;
    return true;
}
main()
{
    int t,i;
    long int n;
    long int a[]
    cin>>t;
    while(t--)
    {
        cin>>n;
        i=n+1;
        while(1)
        {
            if(isprime(i))
                break;
            else
                i=i+1;
        }
        cout<<i<<endl;
    }
}
