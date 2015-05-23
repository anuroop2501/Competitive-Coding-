#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,k,q,i,start,stop,x;
    cin>>n>>k>>q;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    k = k%n;
    start = n-k;
    stop = n-k-1;
    while(q--)
    {
        cin>>x;
        if(x<(n-start))
            cout<<a[start+x]<<endl;
        else
        {
            x = x-(n-start);
            cout<<a[x]<<endl;
        }
    }


}
