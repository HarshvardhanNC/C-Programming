#include<stdio.h>
int main()
{
    int n;
    printf("IF YOU PASS MATHS EXAM ENTER NO. \'1\' \n");
    printf("IF YOU PASS SCIENCE EXAM ENTER NO. \'2\' \n");
    printf("IF YOU PASS BOTH EXAMS ENTER NO. \'3\' \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("CONGRATULATIONS! YOU HAVE REWARDED 15/- RS.\n");
        break;
        case 2:
        printf("CONGRATULATIONS! YOU HAVE REWARDED 15/- RS.\n");
        break;
        case 3:
        printf("CONGRATULATIONS! YOU HAVE REWARDED 45/- RS.\n");
        break;
        default:
        printf("INVALID OPTION");
    }
    return 0;
}