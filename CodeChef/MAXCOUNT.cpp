#include<iostream>
using namespace std;
main()
{
int t,n,i,a[10005],num,k,j;
cin>>t;
while(t--)
{
 cin>>n;
 for(i=0;i<10005;i++)
 a[i]=0;
 for(i=0;i<n;i++)
 {
  cin>>num;
  a[num%10005]++;
 }
 k=0;
 for(i=0;i<10005;i++)
 {
  if(a[i]!=0)
  {
   if(k<a[i])
   {
    k=a[i];
    j=i;
   }
  }
 }
cout<<j<<" "<<k<<endl;
}
}
