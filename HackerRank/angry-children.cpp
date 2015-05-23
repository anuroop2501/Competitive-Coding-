#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,k,i,prev=0,mini;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        mini = a[k-1] - a[0];
        for(i=0;i<=n-k;i++)
        {
            //cout<<i+k-1<<" "<<i<<endl;
            prev = a[i+k-1]- a[i];
            if(mini>prev)
                mini = prev;
        }
        cout<<mini<<endl;
}
