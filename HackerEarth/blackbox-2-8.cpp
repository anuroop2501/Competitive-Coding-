#include<iostream>
using namespace std;
int main()
{
	int a[3000];
	int inp;
	long int count;
	int n=0,c=0;
	int j,i;
	int max;
	cin>>max;
	while(max--)
   {
   	cin>>inp;
   	count =0;
   	a[0]=1;
   	for(j=1;j<=inp;j++)
   	{

	   		for(i=0;i<=n;i++)
	   		{
		   		a[i]=a[i]*j+c;
		   		c=a[i]/10;
		   		a[i]=a[i]%10;
		   	}
		   	while(c)
		   		{
   						a[i++]=c%10;
   						c/=10;
   						n++;
   				}
   	}
   	for(i=n;i>=0;i--)
		count = count + a[i];
    cout<<count<<endl;
    n=0,count =0;
    }
 }




