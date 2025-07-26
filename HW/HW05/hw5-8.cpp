
#include <stdio.h>

int main() {
    int year;
    printf("Enter the year (AD): ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("February has 29 days\n");
            } else {
                printf("February has 28 days\n");
            }
        } else {
            printf("February has 29 days\n");
        }
    } else {
        printf("February has 28 days\n");
    }

    return 0;
}