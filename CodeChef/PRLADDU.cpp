#include<iostream>
#include<cmath>
using namespace std;
main()
{
   int t,n,i,j,start,c;
   cin>>t;
   while(t--)
   {
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
        cin>>a[i];
        start = 0,c=0;
       for(i=0;i<n;i++)
       {
           if(a[i]<0)
           {
               for(j=start;j<i;j++)
                c=c+abs(i-j)*a[j];
               start = i+1;
               //cout<<i<<" "<<a[i]<<endl;
           }

       }
      cout<<c<<endl;
   }
}
