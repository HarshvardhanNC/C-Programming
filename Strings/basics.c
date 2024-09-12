// STRING IS A CHARACTER ARRAY TERMINATING WITH NULL CHARACTER
#include<stdio.h>
int main()
{
    char s[]={'A','A','D','I','\0'};
    char str[]="AADI";//null char is automatically inserted
    char str1[5];// MAX LIMIT OF STRING WILL BE 4 CHARS COZ \0 ALSO GET ADDED
    printf("%s\n",s);
    printf("%s\n",str);
    printf("ENTER YOUR NAME\n");
    scanf("%s",str1);// AS STRING IS ARRAY ; &str[0] = str
    printf("%s",str1);
    return 0;
}