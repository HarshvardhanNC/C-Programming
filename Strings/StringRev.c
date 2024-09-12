#include<stdio.h>
int len(char c[])
{
    int len =0;
    while(c[len]!='\0')
    {
        len++;
    }
    return len;
}
int main()
{
    char c[10];
    printf("ENTER THE STRING\n");
    scanf("%s",c);
    printf("ORIGINAL STRING : %s\n",c);
    for(int i=0;i<len(c)/2;i++)
    {
        char temp=c[i];
        c[i]=c[len(c)-1-i];
        c[len(c)-1-i]=temp;
    }
     printf("REVERSED STRING : %s",c);
    return 0;
}