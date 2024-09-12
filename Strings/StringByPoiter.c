#include<stdio.h>
int main()
{
    char* ptr="HARSH";
    printf("%s\n",ptr);
    ptr="AADI";// NORMAL STRING CAN'NT DO THIS
    puts(ptr);
    return 0;
}