#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int t,n,i,c;
    long long int x,y;
    scanf("%d",&t);
    while(t--)
    {
        c=1;
        scanf("%d",&n);
        scanf("%lld",&x);
        for(i=1;i<n;i++)
            {
                scanf("%lld",&y);
                if(x>=y)
                    c=c+1;
                x=y;

                    }
        printf("%d\n",c);
    }
}
