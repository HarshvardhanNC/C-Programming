#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("ENTER NO OF ROWS\n");
    scanf("%d",&n);
    int nst =1;
    int nsp =n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        char c = 'A';
        for(k=1;k<=nst;k++)
        {
            printf("%c",c);
            c++;
        }
        nst+=2;
        nsp-=1;
        printf("\n");
    }
    return 0;
}