#include<stdio.h>
int main()
{
    int i,j,k,r,c;
    printf("ENTER ROWS AND COLUMNS \n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];

        printf("ENTER ELEMENTS OF 1st\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("ENTERED MATRIX :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
              b[i][j]=a[j][i];
            }
        }
        printf("TRANSPOSED MATRIX :\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    return 0;
}