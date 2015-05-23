#include<iostream>
#include<algorithm>
using namespace std;
int prime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
return 1;
}
main()
{
    int t,n,i,j,flag,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],flag=0,c=0,flag1=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        if(a[0]==1)
            {
                flag1=1;
                flag=1;
            }
        else
        {
            for(i=0;i<n;i++)
                if(prime(a[i]))
                c++;
            if(c>1)
                flag=1;
            for(i=0;i<=n-1;i++)
                for(j=i+1;j<n;j++)
                    if(a[j]%a[i]!=0)
                {
                    flag1 = 1;
                    break;
                }
        }
        if(flag && flag1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
