#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    vector<int> X,up,down;
    int n,i,x,y,j,c,s;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    x=y=0;
    for(i=0;i<n;i++)
    {
        c=0; x=0;
        for(j=0;j<a[i].size();j++)
            {
                if(a[i][j]=='C')
                  c++;
                else
                {
                    if(c>x)
                        x = c;
                   c =0;
                }
            }
         X.push_back(x);
    }
     sort(X.begin(),X.end());
    s = a[0].size();
    j=s;c=0;
    if(a[0][s-1] == 'C')
       while(j--)
       {
           if(a[0][j]=='C')
                c++;
            else
                break;
       }
      up.push_back(0);
      down.push_back(c);
    for(i=1;i<n-1;i++)
    {
        c=0;j=0;
        if(a[i][0]=='C')
          while(j<s)
       {
           if(a[i][j]=='C')
                c++;
            else
                break;
             j++;
       }
       up.push_back(c);
       c=0;j=s;
       if(a[i][s-1] == 'C')
       while(j--)
       {
           if(a[i][j]=='C')
                c++;
            else
                break;
       }
       down.push_back(c);
     }
     c=0;j=0;
      if(a[n-1][0]=='C')
          while(j<s)
       {
           if(a[n-1][j]=='C')
                c++;
            else
                break;
             j++;
       }
       up.push_back(c);
      down.push_back(0);
      c=0;
    for(i=0;i<up.size();i++)
    {
        if(down[i]!=0)
            c = c+up[i+1]+down[i];
        else
        {
            if(c>y)
              y=c;
            c=0;
        }
    }
       cout<<X[n-1]<<" "<<y<<endl;
}
