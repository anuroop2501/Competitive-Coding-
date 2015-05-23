#include<iostream>
using namespace std;
int expo(int a, int b){
    int result;

    if (b==2)
        return a * a;

    if (b==1)
        return a;

    if (b%2==0){
        result = expo(a,b/2);
        return result * result;

    }
    else
        return a * expo(a,b-1);

   return result;
}
main()
{
    long int a,n;
    cin>>a>>n;
    cout<<expo(a,n)<<endl;
     //another method efficient than above
     while (n){ //Using bit is more efficient than this....
    if (n%2==1){ // i.e n&1 if n&1 returns 1 then n is odd number otherwise even
      result *= a;
    }
    n /= 2; // we can use n>>=1 => n=n/2
    a *= a;
    cout<<a<<endl;
  }
}
