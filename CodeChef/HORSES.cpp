#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
main()
{
    int t,n,i,j;
    long int mini,dummy;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        sort(a,a+n);
        mini = a[1] - a[0];
        for(i=1;i<n;i++)
           {
             dummy = abs(a[i] - a[i-1]);
             if(mini>dummy)
             mini = dummy;
            }
    cout<<mini<<endl;
    }
}
