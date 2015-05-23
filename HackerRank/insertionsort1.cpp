#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
     int i,value,j,s;
     for(i=ar.size();i>0;i--)
         if(ar[i]<ar[i-1])
           {
             value = ar[i];
             ar[i] = ar[i-1];
             break;
           }
          // cout<<value;
      for(j=0;j<ar.size();j++)
            cout<<ar[j]<<" ";
      cout<<endl;
      s = i-2;
      for(j=s;j>=0;j--)
      {
          if(ar[j]>value)
            {
                ar[j+1] = ar[j];
                for(i=0;i<ar.size();i++)
                    cout<<ar[i]<<" ";
                cout<<endl;
            }
         if(value>=ar[j])
         {
             ar[j+1] = value;
                for(i=0;i<ar.size();i++)
                    cout<<ar[i]<<" ";
                cout<<endl;
         }
      }
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp);
}

insertionSort(_ar);

   return 0;
}
