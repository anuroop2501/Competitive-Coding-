#include<iostream>
#include<cmath>
using namespace std;
main()
{
    long long int sum;
    int t,mini,i,a[10],index;
    cin>>t;
    while(t--)
    {
        sum=0;
        for(i=0;i<10;i++)
            cin>>a[i];
        mini = a[0],index = 0;
        for(i=0;i<10;i++)
            if(mini>a[i])
            {
                mini = a[i];
                index = i;
            }
        //cout<<"Value:"<<mini<<" "<<"index:"<<index<<endl;
        if(mini == 0 && index!=0)
            cout<<index<<endl;
        else if(mini == 0 && index==0)
            cout<<10<<endl;
        else
        {
            //sum = pow(10,mini);
            while(mini>=0)
            {
                sum = sum+pow(10,mini)*index;
                mini--;
            }
            cout<<sum<<endl;
        }


    }
}
