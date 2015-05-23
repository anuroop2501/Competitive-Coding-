#include<iostream>
#include<algorithm>
using namespace std;
long long fact(int c)
{
    if(c==1)
        return 1;
    else
        return c*fact(c-1);
}
main()
{
    int t,n,i,j,c;
    long long total;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        c=0;total=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                c++;
            else
            {
                total=total+fact(c);
                c=0;
            }

        }
      cout<<total<<endl;
    }
}
