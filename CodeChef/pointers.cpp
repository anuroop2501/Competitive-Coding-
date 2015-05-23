#include<iostream>
using namespace std;
main()
{
    int a,**p1,*p;
    a=100;
    p=&a;
    p1=&p;
    cout<<*p<<" "<<**p1<<endl;
}
