#include <stdio.h>

int main(){
    int num ;
    bool ck ;
    int n   ;

    printf( "Please enter the number. \n" ) ;
    scanf( " %d" , &num ) ;

    if (num <= 1 ) {
        printf( "Please enter the number positive integer." ) ;
    } else {
        do{
            n = 2 ;
            do{
                if ( num % n != 0 ) {
                    ck = 1 ;
                } else {
                    ck = 0 ;
                    break ;
                }//end if else
                n += 1 ;
            } while ( n*n <= num ) ;//end while
            if ( num == 2 || num == 3 ) {
                ck = 1 ;
            }//end if
            if ( ck == 1 ) {
                printf( "%d " , num ) ;
            }//end if
            num -= 1 ;
        } while ( num >= 2 ) ;//end do while
    }//end if else
 
    return 0 ;

}