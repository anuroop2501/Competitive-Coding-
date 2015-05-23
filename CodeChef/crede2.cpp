#include<iostream>
using namespace std;
main()
{
    int j,t,num,a[7],i,dummy,start,sum;
    cin>>t;
    while(t--)
    {
        cin>>num;
        int flag=0;
        for(i=0;i<7;i++)
            a[i]=0;
        i=0;
        dummy=num;
        while(dummy>1)
        {
            a[i]=dummy%10;
            dummy=dummy/10;
            i++;
        }
        start = num - 9*i;
        for(i=start;i<num;i++)
        {
            dummy=i;
            for(j=0;j<7;j++)
                a[j]=0;
            j=0,sum=0;
            while(dummy>0)
            {
                a[j]=dummy%10;
                dummy=dummy/10;
                sum=sum+a[j];
                j++;
            }
            if(num == i+sum)
                {
                     flag=1;
                     break;
                }
            else
                 flag=0;
        }
       if(flag==1)
        cout<<i<<endl;
       else
        cout<<"NONE"<<endl;
    }

}
