#include <stdio.h>

int main() {
    int put = 0;
    
    printf("Enter Your Number for Cheer up! : ");
    scanf("%d", &put);

    for (int i = 0 ; i < put ; i++ ) {
        printf("[%d] Really great \n", i+1);
    }
    return 0;
}