#include<string>
#include<iostream>
using namespace std;
main()
{
    long n,i,sum=0;
    int x,a[100]={0};
    cin>>n;
    string c;
    for(i=0;i<n;i++)
        {
          cin>>x;
          a[x]++;
          cin>>c;
        }
        n=0;
    for(i=0;i<100;i++)
        if(a[i]!=0)
    {
        sum = sum+a[i];
        cout<<sum<<" ";
        n++;
    }
    for(i=0;i<100-n;i++)
        cout<<sum<<" ";
    cout<<endl;
}
