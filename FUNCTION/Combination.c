// nCr = n!/r!*(n-r)!
#include<stdio.h>
int fact(int);
int main()
{
  int n,r;
  printf("ENTER n AND r\n");
  scanf("%d%d",&n,&r);
  int ncr = fact(n)/(fact(r)*fact(n-r));
  printf("ANSWER IS %d",ncr);
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