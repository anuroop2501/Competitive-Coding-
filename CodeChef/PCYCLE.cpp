#include<iostream>
using namespace std;
main()
{
    int n,i,start,j,flag=0;
    cin>>n;
    int a[n],v[n];
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
        cin>>a[i];
    start = 1;
    v[start] = 1;
    i = a[start];
    while(1)
    {
        if(start == 1)
            cout<<start<<" ";
        if(v[i] == 0)
        {
            v[i] = 1;
            cout<<i<<" ";
            i= a[i];

        }
        if(a[i] == start)
        {
            if(i!=a[i])
                cout<<i<<" "<<a[i]<<endl;
            for(j=1;j<=n;j++)
                if(v[j] ==0)
                 {
                  start = j;
                  cout<<start<<" ";
                  v[start] = 1;
                  i = a[start];
                  break;
                 }
        }
        for(j=1;j<=n;j++)
            if(a[j]!=0)
            flag =1;
        if(flag==0)
            break;

    }


}
