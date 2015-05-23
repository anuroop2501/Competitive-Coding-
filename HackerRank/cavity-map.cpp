#include<iostream>
#include<string>
using namespace std;
main()
{
    int n,i,j;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++)
            cin>>a[i];
    for(i=1;i<n-1;i++)
        for(j=1;j<n-1;j++)
         if(int(a[i][j])>int(a[i+1][j]) && int(a[i][j])>int(a[i][j+1]) && int(a[i][j])>int(a[i-1][j]) && int(a[i][j])>int(a[i][j-1]))
           a[i][j] = 'a';
    for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          {
            if(a[i][j] == 'a')
             cout<<"X";
             else
              cout<<a[i][j];
          }
          cout<<endl;
        }
}
