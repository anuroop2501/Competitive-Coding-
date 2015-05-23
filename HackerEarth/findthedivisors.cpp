#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int t,s,i;
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=2;i*i<=n;i++)
            {if(n%i==0)
                s=s+2;
            if(i*i == n)
                s=s-1;
            }
        cout<<s+2<<endl;

    }
}
