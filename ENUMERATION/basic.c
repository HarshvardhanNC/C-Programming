// An enumi n C is essentially a set of named integer constants. By default, the values assigned to these constants are integers starting from 0 and incrementing by 1 for each subsequent member.

#include<stdio.h>
enum days {
    monday,    // 0
    tuesday,   // 1
    wednesday, // 2
    thursday,  // 3
    friday,    // 4
    saturday   // 5
};

int main() {
    enum days day;
    day = monday;

    // Print the integer value of the enum
    printf("%d\n", day);  // This will print 0 since monday is 0 by default

    // Print the name of the day
    switch (day) {
        case monday:
            printf("Monday\n");
            break;
        case tuesday:
            printf("Tuesday\n");
            break;
        case wednesday:
            printf("Wednesday\n");
            break;
        case thursday:
            printf("Thursday\n");
            break;
        case friday:
            printf("Friday\n");
            break;
        case saturday:
            printf("Saturday\n");
            break;
    }

    return 0;
}
