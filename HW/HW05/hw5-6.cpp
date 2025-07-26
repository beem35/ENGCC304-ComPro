#include <stdio.h>

int main() {
    int damage ;
    printf("Warning: This enemy can only be damaged by attacks with an even power.\n");
    printf("Enter the damage value: ");
    scanf("%d", &damage);
    if (damage < 0) {
        printf("Error: Negative damage is not allowed.\n");
    } else if (damage % 2 == 0) {
        printf("Damage applied successfully: %d is an even number.\n", damage);
    } else {
        printf("No damage applied: %d is an odd number.\n", damage);
    }
    return 0;
}