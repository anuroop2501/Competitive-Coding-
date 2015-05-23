#include <stdio.h>
int main()
{
   char c;
   int n;
    c=getchar();
   if(c!='\n')
   {
      n = c-'0';
    printf("%d",n);
   }
}
