#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    string a[n][3];
    string txt;
    for(i=0;i<=n;i++)
     {
         getline(cin,txt);
         a[i][3] = txt;
         if(i==n)
        getline(cin,txt);
     }
    cout<<txt;
}
