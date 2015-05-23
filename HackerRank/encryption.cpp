#include<iostream>
#include<string>
#include<cmath>
using namespace std;
main()
{
    int a,b,s,i,mini,a1,b1;
    float x;
    string msg;
    cin>>msg;
    s = msg.size();
    x = sqrt(s);
    mini=100;
    for(a=floor(x);a<=ceil(x);a++)
     for(b=a;b<=ceil(x);b++)
        if(a*b>=s)
           if(mini>a*b)
           {
            mini = a*b;
            a1 = a;
            b1 = b;
           }
    string arr[a1];
    i=0,a=0;
    while(i<a1)
    {
        if(i==a1-1)
        arr[i] = msg.substr(a,s-a);
        else
            arr[i] = msg.substr(a,b1);
        i++;
        a = i*b1;
    }
    for(b=0;b<b1;b++)
    {
        for(a=0;a<a1;a++)
            if((arr[a][b]-'a'>=0) && (arr[a][b]-'a'<26))
              cout<<arr[a][b];
      cout<<" ";
    }
    cout<<endl;
}
