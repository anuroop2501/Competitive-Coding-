#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main()
{
    int t,i,s,c,a[26],b[26];
    string in;
    cin>>t;
    while(t--)
    {
        cin>>in;
        s = in.size();
        c=0;
        for(i=0;i<26;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        if(s%2!=0)
            cout<<"-1"<<endl;
        else
        {
            for(i=0;i<=s/2-1;i++)
                  a[in[i]-'a']++ ;
            for(i=s/2;i<=s-1;i++)
                  b[in[i]-'a']++ ;
        for(i=0;i<26;i++)
            c = c + abs(a[i]-b[i]);
         cout<<c/2<<endl;
        }

    }

}
