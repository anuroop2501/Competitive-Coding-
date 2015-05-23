#include<iostream>
#include<string>
using namespace std;
main()
{
    int t,i,s,flag;
    string a;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>a;
        s = a.size();
        int arr[s];
        flag = 0;
        for(i=0;i<s;i++)
            arr[i] = a[i]-'a';
        for(i=s-1;i>0;i--)
            {
                if(arr[i]>arr[i-1])
                {
                    flag=1;
                    c = a[i];
                    a[i] = a[i-1];
                    a[i-1] = c;
                    break;
                }
            }
        if(flag)
        {
           for(i=0;i<s;i++)
            cout<<a[i];
        }
        else
            cout<<"not possible";
        cout<<endl;
    }
}
