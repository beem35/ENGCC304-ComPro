#include <stdio.h>


int main() {

    int num = 0 ,ck = 0 ;
    

    printf("Enter Number : ") ;
    scanf( "%d" , &num ) ;
    ck = num;
 
    
    if( ck ==  0 ) {
        printf( "Please Enter only Number " ) ;
    } else {
    if( num % 2 == 0 ) {
        for( int i = num ; i >= 0 ; i-- ) {
            if( i % 2 == 0 ) {
                printf( " %d " , i ) ;
            }//end if
        }//end for
    } else {
        for( int i = 0 ; i <= num ; i++ ) {
            if( i % 2 != 0 ) {
                printf( " %d " , i ) ;
            }//end if
        }//end for
    }//end if
    }//end if
    return 0 ;
}