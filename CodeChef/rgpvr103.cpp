#include<iostream>
using namespace std;
main()
{
    int t,i,j,n,area;
    cin>>t;
    while(t--)
    {
        cin>>n;
        area=0;
        for(i=1;i<int(n/2);i++)
        {
            j= int(n/2) - i;
            if(i*j>=area)
                area=i*j;
        }
        cout<<area<<endl;
    }
}
