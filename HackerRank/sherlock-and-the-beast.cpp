#include<iostream>
using namespace std;
main()
{
    int t,n,a,b,flag,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i= n/5;
        flag=0;
        for(a=0;a<=i;a++)
        {
            b=n-5*a;
            if(b%3==0)
            {
                flag=1;
                break;
            }
        }
    if(flag)
    {
      for(i=0;i<b;i++)
        cout<<"5";
      for(i=0;i<a*5;i++)
        cout<<"3";
    cout<<endl;
    }
    else
        cout<<"-1"<<endl;

    }
}
