#include <stdio.h>
#include <stdlib.h>

typedef struct Baccount {
    int acno;
    char name[20];
    float balance;
} sb;

int main() {
    sb* holder = NULL;  // Pointer to store the list of accounts
    int a_count = 0;    // Number of accounts
    int n;              // Menu choice
    int acno2, acno3, acno4;  // Account numbers for operations

    do {
        printf("~~~MENU~~~\n");
        printf("1. CREATE ACCOUNT\n");
        printf("2. DEPOSIT\n");
        printf("3. WITHDRAW\n");
        printf("4. CHECK BALANCE\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                // Allocate memory for one more account
                holder = realloc(holder, (a_count + 1) * sizeof(sb));
                if (holder == NULL) {
                    printf("MEMORY ALLOCATION FAILED\n");
                    return 1;  // Exit if memory allocation fails
                }
                // Get account holder's details
                printf("ENTER THE NAME OF HOLDER: ");
                scanf("%s", holder[a_count].name);
                holder[a_count].acno = a_count + 10;  // Assign a unique account number
                holder[a_count].balance = 0;  // Initialize balance to 0
                printf("THE ACCOUNT NO OF %s IS: %d\n", holder[a_count].name, holder[a_count].acno);
                a_count++;  // Increase the account count
                break;

            case 2:
                printf("ENTER ACCOUNT NO TO DEPOSIT: ");
                scanf("%d", &acno2);
                {
                    int depo = 0;
                    int flag = 0;
                    for (int i = 0; i < a_count; i++) {
                        if (holder[i].acno == acno2) {
                            printf("ENTER AMOUNT: ");
                            scanf("%d", &depo);
                            holder[i].balance += depo;
                            printf("DEPOSIT SUCCESSFUL. NEW BALANCE: %.2f\n", holder[i].balance);
                            flag = 1;
                            break;
                        }
                    }
                    if (!flag) {
                        printf("ACCOUNT NO NOT FOUND\n");
                    }
                }
                break;

            case 3:
                printf("ENTER ACCOUNT NO TO WITHDRAW: ");
                scanf("%d", &acno3);
                {
                    int with = 0;
                    int flag = 0;
                    for (int i = 0; i < a_count; i++) {
                        if (holder[i].acno == acno3) {
                            printf("ENTER AMOUNT: ");
                            scanf("%d", &with);
                            if (with <= holder[i].balance) {
                                holder[i].balance -= with;
                                printf("WITHDRAWAL SUCCESSFUL. NEW BALANCE: %.2f\n", holder[i].balance);
                            } else {
                                printf("INSUFFICIENT BALANCE\n");
                            }
                            flag = 1;
                            break;
                        }
                    }
                    if (!flag) {
                        printf("ACCOUNT NO NOT FOUND\n");
                    }
                }
                break;

            case 4:
                printf("ENTER ACCOUNT NO TO CHECK BALANCE: ");
                scanf("%d", &acno4);
                {
                    int flag = 0;
                    for (int i = 0; i < a_count; i++) {
                        if (holder[i].acno == acno4) {
                            printf("BALANCE IS %.2f\n", holder[i].balance);
                            flag = 1;
                            break;
                        }
                    }
                    if (!flag) {
                        printf("ACCOUNT NO NOT FOUND\n");
                    }
                }
                break;

            case 5:
                printf("EXITING...\n");
                break;

            default:
                printf("INVALID CHOICE. PLEASE TRY AGAIN.\n");
                break;
        }
    } while (n != 5);

    // Free the allocated memory before exiting
    free(holder);

    return 0;
}
