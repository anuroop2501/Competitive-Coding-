#include<iostream>
#include<cmath>
using namespace std;
int check_fibo(int x,long long int n)
{
   double w = (sqrt(5)+1)/2,d = sqrt(5);
   w = pow(w,x);
   w = w/d + 0.5;
   if((long long)(w) == n)
    return 1;
   else
    return 0;
}
int check_fibo_binet(long long int n)
{
    int x;
    double w,d;
    d = sqrt(5);
    w = 1.6180339;
    x =  int(log(d*n)/log(w) + 0.5);
    if(check_fibo(x,n))
        return 1;
    else
        return 0;

}
int main()
{
    int t;
    cin>>t;
    long long int n;
    while(t--)
    {
    cin>>n;
    if(check_fibo_binet(n))
        cout<<"IsFibo"<<endl;
    else
        cout<<"IsNotFibo"<<endl;
    }
return 0;
}
