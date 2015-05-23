#include<iostream>
using namespace std;
main()
{
    int t,n,c,m,choclates,wrappers;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>m;
        choclates=0,wrappers=0;
        choclates = n/c;
        wrappers = choclates;
        while(wrappers>=m)
        {
            choclates = choclates + wrappers/m;
            wrappers =  wrappers/m + wrappers%m;

        }
        cout<<choclates<<endl;
    }

}
