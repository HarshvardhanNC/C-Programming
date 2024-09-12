#include<stdio.h>
char* strslice(char str[],int m,int n)
{
    int i,j=0;
    static char sliced[20];
    for(i=m;i<=n && str[i]!='\0';i++)
    {
        sliced[j]=str[i];
        j++;
    }
    sliced[j]='\0';
    return sliced;
}
int main()
{
    char str[20];
    int m,n;
    printf("ENTER YOUR STRING\n");
    scanf("%s",str);
    printf("YOUR STRING IS %s\n",str);
    printf("ENTER STARTING AND ENDING POSITION\n");
    scanf("%d%d",&m,&n);
    printf("SLICED STRING %s",strslice(str,m,n));
    return 0;
}