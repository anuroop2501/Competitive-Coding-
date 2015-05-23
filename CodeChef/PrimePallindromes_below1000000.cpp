#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;
int prime(int a);
int palli(int b);
main()
{
  ofstream myfile;
  myfile.open ("example.txt");
    long int constant = 1003003;
    long int i,c=0;
    for(i=1;i<constant;i++)
        if(prime(i))
            if(palli(i))
                {
                 myfile<<i<<",";
                 c++;
                }
cout<<c<<endl;
myfile.close();
}
int prime(int a)
{
    int i,flag=1;
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
        {
            flag=0;
            break;
        }
return flag;
 }
int palli(int b)
{
    int i,flag=1,arr[8],k;
    for(i=0;i<8;i++)
        arr[i]=0;
    i=0;
    while(b>0)
    {
        arr[i] = b%10;
        b=b/10;
        i++;
    }
    k=i;
    for(i=0;i<k;i++)
        if(arr[i]!=arr[k-i-1])
        {
            flag=0;
            break;
        }
return flag;
 }
