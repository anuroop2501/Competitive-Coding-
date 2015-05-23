#include<iostream>
using namespace std;
main()
{
    int t,i,j,total,nails,dummy=0,cost,th,h,te,I,J;
    cin>>t;
    while(t--)
    {
        dummy=0;
        I=0;J=0;
        cin>>nails;
        cin>>th>>h>>te;
        for(i=1;i<=9;i++)
        {
            for(j=0;j<=9;j++)
            {
                total = i*10000+th*1000+h*100+te*10+j;
                if(total%nails==0 && total>=dummy)
                {
                    dummy=total;
                    I=i;
                    J=j;
                }
            }
        }
        cost = dummy/nails;
        if(cost==0)
            cout<<"0"<<endl;
        else
            cout<<I<<" "<<J<<" "<<cost<<endl;
    }
}
