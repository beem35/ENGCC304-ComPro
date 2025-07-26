#include <stdio.h>

int main() {
    printf("measuring the balance of Yin and Yang \n");
    int yin, yang;
    printf("please enter the Yin power: ");
    scanf("%d", &yin);
    printf("please enter the Yang power: ");
    scanf("%d", &yang);
    if (yin < 0 || yang < 0) {
        printf("error: negative power is not allowed\n");
    } else if (yin == yang) {
        printf("Yin and Yang are balanced\n");
    } else if (yin > yang) {
        printf("Yin is stronger than Yang\n");
    } else {
        printf("Yang is stronger than Yin\n");
    }
    
    return 0;
}