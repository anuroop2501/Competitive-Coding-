#include<iostream>
using namespace std;
main()
{
    int t,n,i,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        long long a[n],x;
        cin>>x;
        a[0] = x;
        if(n==1)
            cout<<"YES"<<endl;
        else
        {
           for(i=1;i<n;i++)
        {
            cin>>x;
            a[i] = a[i-1]+x;
        }
        for(i=1;i<n;i++)
            if(a[i-1] == a[n-1]-a[i])
                {flag = 1;break;}
        if(flag)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        }

    }
}
