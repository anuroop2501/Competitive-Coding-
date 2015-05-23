#include<iostream>
using namespace std;
main()
{
    int i,n,d;
    long int sum=0,ap_sum;
    cin>>n;
    long int a[n];
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        ap_sum = (n+1)*(a[0]+a[n-1])/2;
     cout<<ap_sum - sum<<endl;


}
