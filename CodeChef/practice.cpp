#include<iostream>
using namespace std;
main()
{
    int t,i;
    cin>>t;
    long int a[t],j;
    for(i=0;i<t;i++)
    cin>>a[i];
    i=0;
    while(i<t)
    {
        for(j=1;j<=a[i];j++)
        {
            if(j%3 == 0 && j%5!=0)
                cout<<"Fizz"<<endl;
            else if(j%3 != 0 && j%5 ==0)
                cout<<"Buzz"<<endl;
            else if(j%3 == 0 && j%5==0)
                cout<<"FizzBuzz"<<endl;
            else
                cout<<j<<endl;
        }
        i++;
    }
}
