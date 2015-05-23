#include<iostream>
using namespace std;
main()
{
    int a,b,k,m,i;
    long int n;
    long long int s=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>k;
        s = s+(b-a+1)*k;;
    }
    s = s/n;
 cout<<s<<endl;
}
