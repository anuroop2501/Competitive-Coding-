#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long int n,s;
    int T,i;
    cin>>T;
    while(T--)
    {
        s=0;
        cin>>n;
        if(n==1)
            s=0;
        else
        {
            i=2;
            while(i*i<=n)
            {
                if(n%i==0)
                {
                if(i==n/i)
                    s=s+i;
                else
                    s=s+i+(n/i);
                }
              i++;
            }
        s=s+1;
        }
      cout<<s<<endl;
    }
}
