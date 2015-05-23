#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
main()
{
    int t,j,sum,flag,n,m;
    long long int x,i;
    scanf("%d",&t); //cin>>t;
    while(t--)
    {
        scanf("%d %d",&n,&m); //cin>>n>>m;
        int a[n];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]); //cin>>a[j];
            flag = 0;
        for(i=1;i<=pow(2,n);i++)
            {
                sum=0;
                for(j=0;j<n;j++)
                    if(i&(1<<j))
                    sum=sum+a[j];
                if(sum == m)
                 {
                     flag=1;
                     break;
                 }
            }

        if(flag==1)
            printf("Yes\n"); //cout<<"Yes"<<endl;
        else
            printf("No\n"); //cout<<"No"<<endl;


    }
}
