#include<iostream>
#include<string>
using namespace std;
main()
{
    int i,l,b[26],c=0,flag =1;
    string a;
    cin>>a;
    l = a.size();
    for(i=0;i<26;i++)
        b[i] =0;
    for(i=0;i<l;i++)
        b[a[i]-'a']++;
    for(i=0;i<26;i++)
      if(b[i]!=0 && b[i]%2 !=0)
        c++;
   if(c>1)
      flag = 0;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
