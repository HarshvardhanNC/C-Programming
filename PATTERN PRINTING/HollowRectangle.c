/*
     ****** 1
     *    * 2  r=4;c=6
     *    * 3
     ****** 4
     123456
*/
#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("ENTER NO OF ROWS AND COLUMNS ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++) 
        {
            if(i==1||i==r||j==1||j==c)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }printf("\n");
    }

    return 0;
}