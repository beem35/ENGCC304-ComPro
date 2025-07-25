#include <stdio.h>
int main() {
    int day = 0 ;
    printf( "Enter Days : " ) ;
    scanf( "%d", &day) ;

    int sec = day * 24 * 60 * 60 ;
    printf( "%d days = %d seconds\n", day, sec ) ;
    
    return 0;
}