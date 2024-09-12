#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("ENTER NO OF ROWS AND COLUMNS ");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++) 
    {
        char a='A';
        for(j=1;j<=c;j++) 
        {
            printf("%c",a);
            a++;
        }printf("\n");
    }

    return 0;
}
/*
ABCD
ABCD
ABCD
ABCD
*/