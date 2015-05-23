#include<iostream>
#include<vector>
using namespace std;
vector<int> finallist;
main()
{
    int n1,n2,n,i;
    cin>>n>>n1>>n2;
    n = n+n1+n2;
    long int a[n],maxi;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>maxi)
                maxi = a[i];
        }
    long int b[maxi+1];
    for(i=0;i<maxi;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        b[a[i]]++;
    cout<<"output:"<<endl;
    for(i=0;i<=maxi;i++)
        if(b[i]>1)
        finallist.push_back(i);
    cout<<finallist.size()<<endl;
    for(i=0;i<finallist.size();i++)
        cout<<finallist[i]<<endl;
}
