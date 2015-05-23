#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int t,cbr,i,j,flag;
    long int n,num,maxi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cbr = cbrt(n);
        cout<<cbr<<endl;
        maxi=0,flag=0;
        for(i=cbr;i>=0;i--)
            for(j=2;j<=cbr;j++)
             {
                 num = pow(i,3)+ pow(j,3);
                 cout<<num<<endl;
                 if(num<n && maxi<num)
                     {
                         maxi = num;
                         flag=1;
                     }
              }
        if(flag)
            cout<<" "<<maxi<<endl;
        else
            cout<<"-1"<<endl;
    }
}
