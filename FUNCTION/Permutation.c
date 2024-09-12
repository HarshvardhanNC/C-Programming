// nCr = n!/(n-r)!
#include<stdio.h>
int fact(int);
int main()
{
  int n,r;
  printf("ENTER n AND r\n");
  scanf("%d%d",&n,&r);
  int npr = fact(n)/fact(n-r);
  printf("ANSWER IS %d",npr);
  return 0;

}
int fact(int x)
{
    int fac =1;
    for(int i=2;i<=x;i++)
    {
        fac=fac*i;
    }
    return fac;
}