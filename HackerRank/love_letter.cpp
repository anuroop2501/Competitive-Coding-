#include<iostream>
#include<string>
using namespace std;
main()
{
    int t,s,i,x;
    cin>>t;
    string input;
    while(t--)
    {
        x=0;
        cin>>input;
        s=input.size();
        for(i=0;i<s/2;i++)
        {
          if(int(input[i])>int(input[s-i-1]))
             x=x+int(input[i])-int(input[s-i-1]);
          if(int(input[s-i-1])>int(input[i]))
            x=x+int(input[s-i-1])-int(input[i]);
        }
    cout<<x<<endl;
    }
}
