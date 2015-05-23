#include<iostream>
using namespace std;
main()
{
    int t,n,m,i,maxi,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        maxi=0,sum=0;
        int a[n];
        for(i=0;i<n;i++)
            a[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>maxi)
                maxi=a[i];
            sum=sum+a[i];
        }
        //cout<<maxi<<" "<<sum<<endl;
        sum = maxi*n - sum;
        if(m>=sum && (m-sum)%n == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
