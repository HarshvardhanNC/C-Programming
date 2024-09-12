#include<stdio.h>
// struct student 
// {
//     int roll;
//     char name[20];
// };
// struct student s1;
// int main()
// {
//     s1.roll=16;
//     printf("ROLL OF STUDENT 1 IS %d",s1.roll);
//     return 0;
// }
typedef struct student 
{
    int roll;
    char name[20];
}std;// this is the nickname
struct student s1;
int main()
{
    s1.roll=16;
    std s2;// typedef use
    s2.roll=15;
    struct student s3;// this is still valid
    s3.roll=12;
    printf("ROLL OF STUDENT 1 IS %d\n",s1.roll);
    printf("ROLL OF STUDENT 2 IS %d\n",s2.roll);
    printf("ROLL OF STUDENT 3 IS %d\n",s3.roll);
    return 0;
}