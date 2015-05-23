#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int i,s,arr[26],flag=0;
    string a;
    getline(cin,a);
    for(i=0;i<26;i++)
        arr[i]=0;
    s = a.size();
    for(i=0;i<s;i++)
        {
            if(a[i]!= ' ')
            {
                if((a[i]-'a')>=0 &&(a[i]-'a')<26)
                    arr[(a[i]-'a')]++;
                if((a[i]-'A')>=0 &&(a[i]-'A')<26)
                    arr[(a[i]-'A')]++;
            }
        }
    for(i=0;i<26;i++)
       if(arr[i]==0)
        {flag=1;
         break;
        }
    if(flag)
        cout<<"not pangram"<<endl;
    else
        cout<<"pangram"<<endl;
        return 0;
}
