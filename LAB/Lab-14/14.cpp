#include <stdio.h>

int max( int[] , int ) ;

int min( int[] , int ) ;

int main() {
    int n ;
    printf( "Enter N : " ) ;
    scanf( " %d" , &n ) ;
    int num[n] ;
    for ( int i = 0 ; i < n ; i++ ){
        printf( "Enter value [%d] : " , i ) ;
        scanf( " %d" , &num[i] ) ;

    }//end loop for
    printf( "\nIndex: " ) ;
    for (int x = 0 ; x < n ; x++ ){
        printf( "%5d " , x ) ;
    }//end loop for

    printf( "\nArray: " ) ;
    for (int y = 0 ; y < n ; y++ ){
        printf( "%5d " , num[y] ) ;
    }// end loop for

    printf("\nMin =%5d" , min( num , n ) ) ;
    printf("\nMax =%5d" , max( num , n ) ) ;
    
    return 0 ;
}//end int main

int min( int num[] , int n ) {
    // int Pos = -1 ; 
    int Min = 99999 ;

    for( int i = 0; i < n ; i++ ) {
        if( num[i] < Min ){
            Min = num[i] ;
        }
    }
    return Min ;
}

int max( int num[] , int n ) {
    // int Pos = -1 ; 
    int Max = -99999 ;

    for( int i = 0; i < n ; i++ ) {
        if( num[i] > Max ){
            Max = num[i] ;
        }
    }
    return Max ;
}