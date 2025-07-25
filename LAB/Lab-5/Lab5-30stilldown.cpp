#include <stdio.h>
#include <ctype.h>

int main() {

    int score;
    
    printf( "enter score : " ) ;
    scanf( "%d", &score ) ;

    if ( isalpha(score) == 0 ) {
        printf("please enter number only.\n");
    } else if ( score >= 80 && score <= 100 ) {
        printf( "A\n" ) ;
    } else if ( score >= 75 ) {
        printf( "B+\n" );
    } else if ( score >= 70 ) {
        printf( "B\n" );
    } else if ( score >= 65 ) {
        printf( "C+\n" ) ;
    } else if ( score >= 60 ) {
        printf( "C\n" ) ;
    } else if ( score >= 55 ) {
        printf( "D+\n" ) ;
    } else if ( score >= 50 ) {
        printf( "D\n" ) ;
    } else if ( score >= 0 && score < 50 ) {
        printf( "F\n" ) ;
    } else {
        printf( "Invalid score. Please enter a score between 0 and 100.\n" ) ;
    }
    
    return 0;
}