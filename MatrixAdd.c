#include<stdio.h>
int main()
{
    int i,j,k,r,c;
    printf("ENTER ROWS AND COLUMNS \n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sum[r][c];

        printf("ENTER ELEMENTS OF 1st\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("ENTER ELEMENTS OF 2nd\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("FIRST MATRIX :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("SECOND MATRIX :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               sum[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("MATRIX ANSWER :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    return 0;
}