#include <stdio.h>

int main() {
    int num[100] ;
    bool ck[100] ;
    int n ;

    printf( "Enter N : " ) ;
    scanf( " %d" , &n ) ;

    for ( int i = 0 ; i < n ; i++ ){
        ck[i] = 1 ;
        printf( "Enter value [%d] : " , i ) ;
        scanf( " %d" , &num[i] ) ;

        for ( int j = 2 ; j*j <= num[i] ; j++ ){
            if( num[i] % j == 0 ){
                ck[i] = 0 ;
                break;
            }//end if

        }//end loop for

    }//end loop for
    printf( "\nIndex: " ) ;
    for (int x = 0 ; x < n ; x++ ){
        printf( "%d " , x ) ;
    }//end loop for

    printf( "\nArray: " ) ;
    for (int y = 0 ; y < n ; y++ ){
        if ( ck[y] == 1 ) {
            printf( "%d " , num[y] ) ;
        } else {
            printf( "# " ) ;
        }//end if else

    }// end loop for
    
    return 0 ;
}//end int main