#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NUMBER ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) // REPEATING THE ROWS
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",j); // 1,2,3.. AND THEN PRINT \n
        }printf("\n");
    }
    return 0;         
}