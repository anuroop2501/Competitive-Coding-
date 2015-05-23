#include<iostream>
#include<algorithm>
using namespace std;
int maximum(long int a,long int b,long int c)
{
    if(a>=b && a>=c)
        return a;
    else if(c>=b && c>=a)
        return c;
    else if(b>=a && b>=c)
        return b;

}
main()
{
    int t,R,G,B,M,i;
    cin>>t;
    while(t--)
    {
        cin>>R>>G>>B>>M;
        long int r=0,g=0,b=0,r_m=0,g_m=0,b_m=0,dummy,maxi=0;
        for(i=0;i<R;i++)
            {
                cin>>dummy;
                if(dummy>maxi)
                    maxi = dummy;
            }
           r = maxi,maxi=0;
        for(i=0;i<G;i++)
            {
                cin>>dummy;
                if(dummy>maxi)
                    maxi = dummy;
            }
            g = maxi,maxi=0;
        for(i=0;i<B;i++)
            {
                cin>>dummy;
                if(dummy>maxi)
                    maxi = dummy;
            }
            b = maxi,maxi=0;
        while(M--)
        {
            maxi = maximum(r,g,b);
            //cout<<maxi<<"<--"<<endl;
            if(maxi == r)
                r=r/2;
            else if(maxi == g)
                g=g/2;
            else
                b=b/2;
        }
 cout<<maximum(r,g,b)<<endl;
    }

}
