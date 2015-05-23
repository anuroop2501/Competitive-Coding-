#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main()
{
        int i,s,c,a[26],b[26];
        string in1;
        string in2;
        cin>>in1;
        cin>>in2;
        s = in1.size();
        c=0;
        for(i=0;i<26;i++)
            a[i]=b[i]=0;
        for(i=0;i<s;i++)
            a[in1[i]-'a']++ ;
        s = in2.size();
        for(i=0;i<s;i++)
            b[in2[i]-'a']++ ;
        for(i=0;i<26;i++)
            c = c + abs(a[i]-b[i]);
         cout<<c<<endl;
}
