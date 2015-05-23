#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int t,p,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        int a[n],c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>=0;i--)
            {
                if(a[i]>=p)
                    c++;
                else
                    break;
            }
    cout<<c<<endl;
    }
}
