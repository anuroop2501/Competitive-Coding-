#include<iostream>
using namespace std;
main()
{
    int i,t,n,a,b,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
		if(a>b)
			{
			s=a;
			a=b;
			b=s;
		}
		s=0;
		if(a==b)
            cout<<a*(n-1)<<endl;
        else
        {
            for(i=n-1;i>=0;i--)
            {
                s = a*i + b*(n-1-i);
                cout<<s<<" ";
            }
        cout<<endl;

        }
    }
}
