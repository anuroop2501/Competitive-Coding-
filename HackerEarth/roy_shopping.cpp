#include<iostream>
#include<cstdio>
using namespace std;
main()
{
   long int t,n,i,flag;
   scanf("%ld",&t);
   while(t--)
   {
      scanf("%ld",&n);
      flag=0;
      for(i=2;i*i<=n;i++)
        if(n%i==0)
            {
              flag=1;
              break;
            }
      if(flag==1)
        printf("%ld \n",n-i);
      else
        printf("0\n");
   }

}
