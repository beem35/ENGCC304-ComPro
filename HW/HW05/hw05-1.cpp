#include <stdio.h>

int main() {
    char a ,b, c, d ;
    printf( "Enter four characters: " ) ;
    scanf( " %c %c %c %c", &a, &b, &c, &d ) ;
    printf( "You want to print backwards? (y/n): " ) ;
    char yn;
    scanf( " %c", &yn ) ;
    if (yn == 'y' || yn == 'Y') {
        printf( "%c %c %c %c\n", d, c, b, a ) ;
    } else if (yn == 'n' || yn == 'N') {
        printf( "%c %c %c %c\n", a, b, c, d ) ;
    } else
    {
        printf( "code error: invalid input\n" ) ;
    }
    
    return 0;
}