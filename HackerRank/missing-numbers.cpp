#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long m,n,i;
 cin>>n;
 int a[10001],b[10001],num,k;
 for(i=0;i<10001;i++)
    a[i]=b[i]=0;
 for(i=0;i<n;i++)
 {
     cin>>num;
     a[num]++;
 }
 cin>>m;
 for(i=0;i<m;i++)
    {
      cin>>num;
     b[num]++;
     }
  for(i=0;i<10001;i++)
        a[i] = abs(b[i] - a[i]);
  for(i=0;i<10001;i++)
    if(a[i]>0)
     {
       k = a[i];
       while(k--)
       cout<<i<<" ";
     }
   cout<<endl;
  return 0;
}
