//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    // float data
    float a = 3 ;
    float b = 3 ;

    // bool data
    bool F1 = false ;
    printf( "bool : %d " , F1 ) ;

    // int data
    int i = 0 ;

    if( F1 != false ) {
        printf( "ok " ) ;
    } else while( i <= 5 ) {
        printf( " not-okey-%d " , ++i ) ;
    }// end if 

    for( i = 3 ; i < 10 ; i++ ) {
        if( i % 2 == (!0?0:1)) {
            printf( "see see" ) ;
        }// end if
        printf( "haha" ) ;
    }// end for

    return 0 ;
}// end main function