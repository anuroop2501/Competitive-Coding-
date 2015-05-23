#include<iostream>
using namespace std;
main()
{
    long n,i;
    cin>>n;
    int x,a[100]={0};
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=0;i<100;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
