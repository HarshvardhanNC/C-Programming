/*
  n=4
i      j
1 2468 4 i+j=n+1||j=(n+1)-i
2 246  3
3 24   2
4 2    1
*/
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("ENTER NO OF TERMS ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    int a=2;
    for(j=1;j<=(n+1)-i;j++)
    {
      printf("%d",a);
      a+=2;
    }printf("\n");
  }
  return 0;

}