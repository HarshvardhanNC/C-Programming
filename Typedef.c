// USED TO GIVE NICKNAMES TO DATA TYPES
#include<stdio.h>
int main()
{
    typedef unsigned long ul;
    ul a = 4425;// rather than unsigned long a = 4425
    printf("%u",a);
    return 0;
}