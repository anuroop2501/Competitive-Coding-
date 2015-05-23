#include<iostream>
#include<string>
using namespace std;
main()
{
    int t,n,i,limit,j;
    long int start,present,past,dummy;
    cin>>t;
    while(t--)
    {
        cin>>n>>start;
        long int id[n+1];
        char g[n];
        id[0] = start;
        for(i=0;i<n;i++)
        {
            cin>>g[i];
            if(g[i] == 'P')
                cin>>id[i+1];
            if(g[i] == 'B')
                id[i+1] = 0;
        }
        present = start;
        i=0;
        past = start;
        while(i<n)
        {
            if(g[i] == 'P')
            {
                past = present;
                present = id[i+1];
                i=i+1;
            }
            if(g[i] == 'B')
            {
                dummy = past;
                past = present;
                present = dummy;
                i = i+1;
            }

        }
        cout<<"Player "<<present<<endl;
    }
}
