#include <stdio.h>
int main() {
    float deg = 0 ;
    printf( "Enter Celsius : " ) ;
    scanf( "%f", &deg) ;

    float fah = ( deg * 1.8 ) + 32 ;
    printf( "%d degree Celsius = %.1f degree Fahrenheit\n", (int)deg, fah ) ;
    
    return 0;
}