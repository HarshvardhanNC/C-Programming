#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="HARSH";
    printf("LENGTH OF A STRING IS %d\n",strlen(str));//EXCLUDES THE NULL CHAR
    char str1[10];
    strcpy(str1,str);//COPY SECOND STRING INTO FIRST
    printf("%s %s\n",str,str1);
    char str2[]="BHAI";
    strcat(str1,str2);//CONCATINATE BOTH AND STORES IN FIRST
    printf("%s\n",str1);
    strrev(str2);// REVERSE A STRING
    printf("%s\n",str2);
    // strcmp COMPARES BOTH STRING IF BOTH ARE EQUAL IT RETURNS 0
    // IF FIRST STRING IS SMALLER THAN SECOND ALPHABTICALLY OR ASCII IT RETURNS -ve VALUE
    // ELSE IF FIRST IS GREATER THEN IT RETURNS +ve VALUE
    printf("%d\n",strcmp("DADDY","JABRDAST"));
    printf("%d\n",strcmp("JABRDAST","DADDY"));
    printf("%d\n",strcmp("DADDY","DADDY"));
    return 0;
}