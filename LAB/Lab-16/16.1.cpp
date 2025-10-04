#include <stdio.h>


int main() {
    
    int num[7] = {15, 7, 25, 3, 73, 32, 45} ;
    
    printf( "\nOld Series : " ) ;
    for (int y = 0 ; y < 7 ; y++ ){
        printf( "%5d " , num[y] ) ;
    }// end loop for

    int temp = 0 ;

    for( int i = 0; i < 7 ; i++ ) {
        for ( int j = i; j < 7; j++ ) {
            if( num[i] > num[j] ){
                temp = num[i] ;
                num[i] = num[j] ;
                num[j] = temp ;
            }
        }
        
    }

    printf( "\nNew Series : " ) ;
    for (int y = 0 ; y < 7 ; y++ ){
        printf( "%5d " , num[y] ) ;
    }// end loop for

    int Pos = -1 ; 

    for( int i = 0; i < 7 ; i++ ) {
        if( num[i] == 32 ){
            Pos = i ;
        }
    }

    printf("\nPos of 32 :%5d" , Pos ) ;
    
    return 0 ;
}//end int main

