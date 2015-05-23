#include<iostream>
#include<string>
using namespace std;
main()
{
    string input,d;
    int i,j,t,l,k;
    cin>>t;
    while(t--)
    {
        getline(cin,input);
        l=input.size();
        int a[l];
        for(i=0;i<l;i++)
            a[i]=0;
        j=1;
        a[0]=0;
        for(i=0;i<l;i++)
        {
          if(input[i]==' ')
           {
            a[j] = i;
            j++;
           }
        }
        cout<<j<<endl;
        for(i=0;i<=j;i++)
            cout<<a[i]<<endl;



    }


}
