#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int t,i,a[10],s,c;
    long int n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n;
        i=0,c=0;
        while(n>=1)
        {
            a[i]=n%10;
            n=n/10;
            i++;
        }
    s = i;
    for(i=0;i<s;i++)
        if(a[i]!=0 && x%a[i]==0)
            c++;
    cout<<c<<endl;
    }
return 0;
}
