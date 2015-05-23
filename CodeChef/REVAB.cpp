#include<iostream>
#include<string>
#include<string.h>
using namespace std;
main()
{
    int t,s,i,start,stop,c,maxi,c_b,c_a;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        s=a.size();
        start = s,stop =0,maxi=0,c=0,c_b=0,c_a=0;
        for(i=0;i<s;i++)
            {
                if(a[i] =='b')
                    {
                        if(start>i)
                           {
                               start =i;
                               if(i==s-1)
                                start=0;
                           }
                        c =0;
                        c_b=c_b+1;
                    }
                 if(a[i] =='a')
                 {
                     c=c+1;
                     if(c>maxi)
                     {
                         if(i>start)
                         {
                             maxi = c;
                             stop = i;
                        }
                    }
                     c_a = c_a+1;
                 }

            }
            if(start>stop)
                cout<<"0"<<","<<"0"<<endl;
            else if(c_b==s || c_a == s)
                cout<<"0"<<","<<"0"<<endl;
            else
                cout<<start<<","<<stop<<endl;

    }

}
