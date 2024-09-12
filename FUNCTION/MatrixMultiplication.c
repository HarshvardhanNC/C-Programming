#include<stdio.h>
int r1,c1,r2,c2;
void matmul(int[],int);
int main()
{
    printf("ENTER ROWS AND COLUMNS FOR 1st\n");
    scanf("%d%d",&r1,&c1);
    printf("ENTER ROWS AND COLUMNS FOR 2nd\n");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][c2];
    if(c1!=r2)
    {
        printf("MULTIPLICATION NOT POSSIBLE\n");
    }
    else
    {
        printf("ENTER ELEMENTS OF 1st\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("ENTER ELEMENTS OF 2nd\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("FIRST MATRIX :\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("SECOND MATRIX :\n");
        for(int i =0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("MATRIX ANSWER : \n");
        matmul(a,b);
        return 0;
    }
}
void matmul(int x[r1][c1],int y[r2][c2])
{
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                   c[i][j]+=x[i][k]*y[k][j];
                }
            }
        }
        printf("MATRIX ANSWER :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
}
    
