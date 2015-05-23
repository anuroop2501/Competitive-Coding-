#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
    long n,i,j,flag=0;
    long x;
    cin>>n;
    long s,c[n];
    vector<long> a,b;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(b.begin(),b.end());

    for(i=0;i<n;i++)
        c[i] = a[i] - b[i];
    for(i=0;i<n;i++)
        if(c[i]!=0)
            break;
    j=s=i;
    x = c[i];
    b.clear();
    while(c[j]!=-x && j<n)
    {
        b.push_back(c[j]);
        j++;
    }
    if(j!=n)
      b.push_back(c[j]);
      i=0;j=(b.size())-1;
    while(i<=j)
    {
        if(b[i]!=-b[j])
        {
            flag =1;
            break;
        }
        if(b.size()%2==0 )
        {
            if(b.size()==2)
               flag = 2;
            if(b[i]==0 && b[j]==0 )
               flag = 2;
        }
        else
        {
            if(b[i]==0 && b[j]==0)
            flag = 2;
        }


        i++;j--;
    }
   if(flag==1)
    cout<<"no"<<endl;
   if(flag==2)
   {
        cout<<"yes"<<endl;
        cout<<"swap "<<s+1<<" "<<s+b.size()<<endl;
   }
   if(flag==0)
   {
       cout<<"yes"<<endl;
       cout<<"reverse "<<s+1<<" "<<s+b.size()<<endl;
   }

}
