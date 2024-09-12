/*
   
    ###*         
    ##**  
    #***    n=4
    ****

" IMAGINE THERE ARE 2 SEPERATE TRIANGLES OF # & * "
      " HERE WE WILL NEED 3 LOOPS TOTAL "
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n-i;j++)
      {
        printf("#");
      }
      for(k=1;k<=i;k++)
      {
        printf("*");
      }printf("\n");
    }
    return 0;
}
