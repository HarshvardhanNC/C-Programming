/*Program to sum of 10 numbers and if user
  enter negative no. It will SKIP */ 
#include<stdio.h>
int main()
{
  int i,n,sum=0;
  for(i=1;i<=10;i++)
  {
    printf("ENTER YOUR NUMBER\n");
    scanf("%d",&n);
    if(n<0)
    {
        continue;; // NEXT ITERATION OF LOOP
    }
    else
    {
        sum=sum+n;
    }
  }
  printf("SUM IS %d",sum);
  return 0;
}