#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
bool prime(long int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i == 0)
           return false;
    return true;
}
main()
{
    long int n,i,c=0;
    cin>>n;
    ofstream in;
        in.open("primes.txt");
    for(i=2;i<=n;i++)
    if(prime(n))
    {
        in <<i<<",";
        c++;
    }
    cout<<c<<endl;
}
