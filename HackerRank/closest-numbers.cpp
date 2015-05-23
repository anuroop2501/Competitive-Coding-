#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    vector<long long> arr;
    long a[n],mini;
    for(i=0;i<n;i++)
        cin>>a[n];
    sort(a,a+n);
    mini = a[n-1];
    for(i=0;i<n-1;i++)
        if(mini>a[i+1]-a[i])
            mini=a[i+1]-a[i];
    for(i=0;i<n-1;i++)
        if(mini==a[i+1]-a[i])
                arr.insert()
}
