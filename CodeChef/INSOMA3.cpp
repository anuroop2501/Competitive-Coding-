#include<iostream>
using namespace std;
main()
{
    int n,i,c=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            for(j=0;j<i;j++)
                if(a[j]>a[i])
                c++;
        }
    }
  cout<<c<<endl;

}
