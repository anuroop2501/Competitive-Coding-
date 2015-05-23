#include<stdio.h>
int gcd(int a,int b)
{
   if(b==0)
     return a;
    else
     return gcd(b,a%b);
}
int abs(int x)
{
    return x>0?x:-x;
}
int main()
{
    int T;
    int x1,y1,x2,y2,gd,x,y,ans;

    scanf("%d",&T);

    while(T>0)
    {
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     if(x2 == x1 || y2 == y1)
      printf("%d\n",0);
     else
     {
     x = abs(x2-x1);
     y = abs(y2-y1);
     gd = gcd(x,y);
     ans = x+y-gd;
     printf("%d\n",ans);
     }
    T--;

    }
    return(0);
}
