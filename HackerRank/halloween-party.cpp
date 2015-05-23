#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int t;
    cin>>t;
    long int n,a,b,ans;
    while(t--)
    {
        cin>>n;
        ans = 1;
        for(a=1;2*a<=n;a++)
        {
            b=n-a;
            ans = max(ans,a*b);
        }
      cout<<ans<<endl;
    }


}
