/*
 n=4
     1
     AB
     123
     ABCD
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER NO OF TERMS ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char a='A';
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                 printf("%d",j);
            }
            else
            {
                printf("%c",a);
                a++;
            }
        }printf("\n");
    }

    return 0;
}