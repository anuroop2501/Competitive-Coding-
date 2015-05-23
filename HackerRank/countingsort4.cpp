#include<iostream>
#include<string>
#include<tuple>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    string d;
    vector<tuple<int,int,string>>s ;
    for(i=0;i<n;i++)
    {
        cin>>x>>d;
        if(i<=n/2-1)
            d = '-';
        s.push_back(make_tuple(x,i,d));
    }
    sort(s.begin(),s.end());
    for(vector<tuple<int,int,string>>::iterator it = s.begin();it!=s.end();it++)
        cout<<get<2>(*it)<<" ";
    cout<<endl;

return 0;
}
