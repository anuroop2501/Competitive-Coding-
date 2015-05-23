#include<iostream>
#include<cstdio>
main()
{
    int n,k,i;
    long int a;
    scanf("%ld %d %d",&a,&n,&k);
    long int v[k];
    for(i=0;i<k;i++)
        v[i]=0;
    for(i=0;i<k;i++)
    {
        v[i] = a%(n+1);
        a = a/(n+1);
    }
    for(i=0;i<k;i++)
        printf("%ld ",v[i]);
    printf("\n");
}
