#include<iostream>
#include<string.h>
using namespace std;
main()
{
    long long int t;
    int l1,l2,i,c[12],n1[12],n2[12],j,k;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        l1=a.size();
        l2=b.size();
        for(i=0;i<l1;i++)
            n1[i] = a[i] - '0';
        for(i=0;i<l2;i++)
            n2[i] = b[i] - '0';
        int carry = 0;
        for(i=l1-1,j=l2-1,k=0;i>=0&&j>=0;i--,j--,k++)
        {
            c[k] = (n1[i]+n2[j]+carry)%10;
            carry = (n1[i]+n2[j]+carry)/10;
        }
        if(l1>l2)
            while(i>=0)
            {
                c[k++] =(n1[i]+carry)%10;
                carry = (n1[i--]+carry)/10;
            }
        else if(l2>l1)
            while(j>=0)
            {
                c[k++] =(n1[j]+carry)%10;
                carry = (n1[j--]+carry)/10;
            }
        else
            if(carry>0)
            c[k++] = carry;
       for(i=k-1;i>=0;i--)
        cout<<c[i];
    cout<<endl;
    }

}
