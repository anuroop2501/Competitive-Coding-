#include<iostream>
using namespace std;
main()
{
   int a,b,arr[200],i,temp=0,x,c=0,t;
   for(i=0;i<200;i++)
    arr[i]=0;
    cin>>t>>b;
    i=0;
  while(t--)
  {
      cin>>a;
      while(b>1)
   {
       arr[i]=b%10;
       b=b/10;
       i++;
   }
   c=0;
   for(i=0;i<200;i++)
    if(arr[i]!=0)
   {
       x=a*arr[i]+temp;
       arr[i]=x%10;
       temp=x/10;
       c++;
   }
   i=c;
   while(temp>0)
   {
       arr[i]=temp%10;
       temp=temp/10;
       i++;
       c++;
   }
   for(i=c-1;i>=0;i--)
        cout<<arr[i]<<endl;
   cout<<"------------"<<endl;

  }


}
