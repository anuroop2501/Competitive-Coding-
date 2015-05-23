#include<iostream>
using namespace std;
main()
{
    int t,l,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>l>>m>>a>>b;
        if((l*m)%(a*b) == 0)
            {
                if(l%a !=0 || m%b !=0 || l<a || m<b)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
            }
        else
            cout<<"no"<<endl;
    }
}
