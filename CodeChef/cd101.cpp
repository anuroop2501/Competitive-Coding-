#include<iostream>
using namespace std;
main()
{
    int l,m,n;
    cin>>l>>m>>n;
    if((m-l)>=(n-m))
       cout<<(m-l)-1<<endl;
    else
        cout<<(n-m)-1<<endl;
}
