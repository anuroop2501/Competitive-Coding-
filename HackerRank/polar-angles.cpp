#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;
#define pi 3.14159265
main()
{
    int n,i=0,d=0;
       cin>>n;
      double s;
    double x[n],y[n];
    vector<tuple<double,double,int>> a;
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<n;i++)
    {
         s = sqrt(x[i]*x[i]+y[i]*y[i]);
      if(x[i]>=0 && y[i]>=0)
      {
          if(x[i]==0)
            a.push_back(make_tuple(pi/2,s,i));
          else
            a.push_back(make_tuple(atan(y[i]/x[i]),s,i));
      }
      if(x[i]<0 && y[i]>=0)
            a.push_back(make_tuple(pi-atan(abs(y[i]/x[i])),s,i));
      if(x[i]>=0 && y[i]<0)
      {
          if(x[i]==0)
            a.push_back(make_tuple(3*pi/2,s,i));
          else
            a.push_back(make_tuple(2*pi - tan(abs(y[i]/x[i])),s,i));
      }
      if(x[i]<0 && y[i]<0)
            a.push_back(make_tuple(pi + atan(abs(y[i]/x[i])),s,i));
    }
    sort(a.begin(),a.end());
    for(vector<tuple<double,double,int>>::iterator it=a.begin();it!=a.end();it++)
       {
         d = get<2>(*it);
         cout<<x[d]<<" "<<y[d]<<endl;
       }
 }


