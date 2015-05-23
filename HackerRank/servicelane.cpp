#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int N,t,i,start,stop,mini;
    cin>>N>>t;
    int a[N];
    for(i=0;i<N;i++)
        cin>>a[i];
    while(t--)
    {
        cin>>start>>stop;
        mini=a[start];
        for(i=start;i<=stop;i++)
            if(mini>a[i])
            mini=a[i];
        cout<<mini<<endl;
    }
}
