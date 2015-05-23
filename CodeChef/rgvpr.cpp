#include<iostream>
#include<string>
#include<string.h>
using namespace std;
main()
{
 string a;
 int i,m,t;
 cin>>t;
 while(t--)
 {
   cin>>a;
   m=(a.size())/2;
   for(i=m-1;i>=0;i--)
   cout<<a[i];
   for(i=(2*m)-1;i>=m;i--)
   cout<<a[i];
cout<<endl;
 }
}
