#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("ENTER STRING\n");
    fgets(str,20,stdin);
    puts(str);
    char* p=str;
    printf("FIRST CHARACTER OF STRING IS %c\n",p[0]);
    puts(p);
    printf("LAST CHARACTER OF STRING IS %c\n",*(p+strlen(p)-1));
    return 0;
}