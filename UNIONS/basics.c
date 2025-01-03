// Allocates the memory equal to size of largest member 
// Used when only one data member will be used at a time.
// Modifying one member overwrites other members.
// Single memory location , Used in old times
#include<stdio.h>
union Student
{
    int roll;
    char name;
    float marks;
};// }u1={16,'a',40.0} NOT ALLOWED

int main()
{
    union Student u1;
    u1.roll=16;
    u1.name='b';
    u1.marks=50.0;
    printf("%d\n",sizeof(u1));
    printf("%d\n",u1.roll);
    printf("%c\n",u1.name);
    printf("%f\n",u1.marks); // only marks will be printed others will be garbage 
    return 0;
}