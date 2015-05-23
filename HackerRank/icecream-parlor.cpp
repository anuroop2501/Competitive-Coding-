#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
main()
{
    int t,n,m,i,j,c,b;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int arr[n],a[n];
        for(i=0;i<n;i++)
        {
          cin>>j;
          a[i] = j;
          arr[i] =j;
        }
        sort(arr,arr+n);
        i=0;j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]>m)
                j=j-1;
            if(arr[i]+arr[j]<m)
                i=i+1;
            if(arr[i]+arr[j]==m)
               {
                   c = arr[i];
                   b = arr[j];
                   break;
               }
        }
        for(i=0;i<n;i++)
          if(a[i]==c)
            break;
        for(j=0;j<n;j++)
            if(a[j] == b && j!=i)
               break;
        if(i>j)
            cout<<i+1<<" "<<j+1<<endl;
        else
            cout<<j+1<<" "<<i+1<<endl;
    }
}
