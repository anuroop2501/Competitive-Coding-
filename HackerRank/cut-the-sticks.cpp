#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    int t,i,mini;
    vector<int> sticks;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>mini;
        sticks.push_back(mini);
    }
mini = *min_element(sticks.begin(), sticks.end());
while(sticks.size()>0)
{
    cout<<sticks.size()<<endl;
    for(i=0;i<sticks.size();i++)
        if(sticks[i] == mini)
              {
                  sticks.erase(sticks.begin()+i);
                  i = i-1;
              }
    mini = *min_element(sticks.begin(), sticks.end());
}
}
