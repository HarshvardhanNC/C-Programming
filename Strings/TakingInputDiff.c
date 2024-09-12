#include<stdio.h>
int main()
{
    char str[6];
    printf("ENTER STRING\n");
    for(int i=0;i<5;i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);//IT EXCLUDE ENTER SPACE KEY WHILE INPUT
    } 
    str[5]='\0';
    printf("%s",str); 
    return 0;
}