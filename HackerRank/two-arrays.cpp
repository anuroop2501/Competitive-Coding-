#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int t,i,n,flag;
    long k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        flag = 0;
        long a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
            if((a[i]+b[n-1-i])<k)
              {
                  flag = 1;
                  break;
              }
       if(flag)
                cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;
    }

}
