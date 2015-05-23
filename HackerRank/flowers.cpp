#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int i,j,n,k;
        cin>>n>>k;
        long int a[n],c[n],sum=0;
        for(i=0;i<n;i++)
            {
                cin>>a[i];
                c[i]=0;
            }
        j=0;
        sort(a,a+n);
        while(j<ceil(n/k))
        {
            for(i=n-1-j*k;i>n-1-(j+1)*k;i--)
                {
                    sum = sum+(j+1)*a[i];
                   //cout<<a[i]<<" ";
                   c[i]=1;
                }
            j++;
        }
        for(i=0;i<n;i++)
            if(c[i]==0)
               sum = sum+(j+1)*a[i];
               //cout<<a[i]<<" ";
        cout<<sum<<endl;

}

