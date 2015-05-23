#include<iostream>
#include<string>
using namespace std;
main()
{
    int t,i,b[26],c[26],j,c;
    for(i=0;i<26;i++)
       {
           c[i]=0;
           b[i]=0;
       }

    cin>>t;
    string a[t];
    for(i=0;i<t;i++)
        cin>>a[i];
    for(i=0;i<a[0].size();i++)
        b[int(a[0][i]-'a')]++;
    for(i=1;i<t;i++)
    {
        for(j=0;j<a[i].size();j++)
        c[int(a[i][j]-'a')]++;
        for(j=0;j<26;j++)
        {
            if((c[j] && b[j])==1)
                b[j] = 1;
            else
                b[j] =0;
        }
        for(j=0;j<26;j++)
            c[j]=0;
    }
    for(j=0;j<26;j++)
        if(b[j]!=0)
         c++;
cout<<c<<endl;
}
