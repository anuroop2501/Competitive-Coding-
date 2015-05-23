#include<iostream>
using namespace std;
main()
{
    int n,i,num,l,u,m,flag=0;
    cin>>num;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    l = 0;
    u = n-1;
    while(l<=u)
    {
        m = (l+u)/2;
        if(a[m]==num)
            break;
        else if(num>a[m])
            l=m+1;
        else
            u = m-1;
    }
    cout<<m<<endl;
}
