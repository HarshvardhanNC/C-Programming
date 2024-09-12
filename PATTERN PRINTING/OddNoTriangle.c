/*
  n=4
i      j
1 1    1
2 13   2
3 135  3
4 1357 4
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      int a=1;
      for(j=1;j<=i;j++)
      {
        printf("%d",a);
        a+=2;
      }printf("\n");
    }
    return 0;
}
// IF WE WANT 
/*
1
35
7911
Write a=1 before 1st loop
*/