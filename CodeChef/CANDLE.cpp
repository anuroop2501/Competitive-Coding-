#include<iostream>
using namespace std;
main()
{
    int t,i,m,a,age[10];
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
            age[i]=0;
            m=9;a=9;
        for(i=0;i<10;i++)
        {
            cin>>age[i];
            if(m>age[i])
                m=age[i];
            if(m==age[i] && a>i)
                a=i;
            cout<<m<<" "<<a<<endl;
        }
        cout<<"----------"<<endl;
        cout<<m<<" "<<a<<endl;
       /* for(i=0;i<10;i++)
        {
            if(age[i]==0 && i!=0)
            {
                cout<<i<<endl;
                break;
            }
            if(age[i]==0 && i==0)
            {
                while(m>0)
                {
                    num = num+i*pow(10,m-1);
                    m--;
                }
            }
        }*/
    }
}

