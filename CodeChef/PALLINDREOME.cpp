#include<iostream>
#include<fstream>
using namespace std;
const int MAX = 99999;
bool pallindrome(int a)
{
    int i,arr[6],k;
    for(i=0;i<6;i++)
        arr[i]=0;
        i=0;
    while(a>=1)
    {
        arr[i]=a%10;
        a=a/10;
        i++;
    }
    k=i;
    for(i=0;i<k;i++)
        if(arr[i]!=arr[k-i-1])
            return false;
return true;
}
main()
{
    ofstream out;
    out.open("pallindromes.txt");
    int i,n,c=0;
    cin>>n;
    for(i=n+1;i<=MAX;i++)
        if(pallindrome(i))
            {
                out<<i<<",";
                c++;
            }
  out.close();
  cout<<c<<endl;
}
