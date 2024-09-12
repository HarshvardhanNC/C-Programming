#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("ENTER SIZE OF STRING\n");
    scanf("%d",&n);
    char* str;
    str=(char*)malloc(n*sizeof(char));
    if(str==NULL)
    {
        printf("UNABLE TO ALLOCATE MEMORY\n");
        return 1;
    }
    printf("ENTER YOUR NAME\n");
    scanf("%s",str);
    puts(str);
    free(str);
    return 0;
}