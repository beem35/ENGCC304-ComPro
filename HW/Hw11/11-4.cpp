#include <stdio.h>

void sum_n( int * ) ;

int main(){
    int num ;

    printf( "Input number : " ) ;
    scanf( " %d" , &num ) ;

    sum_n(&num) ;

    printf( "Sum = %d " , num ) ;

    return 0 ;
}//end main

void sum_n(int *n ){
    int x ;
    int y ;
    printf( " Series" ) ;
    for( int i = 1 ; i <= *n ; i++ ){
        y = i - 1 ;
        x += i + y ;
        printf( " %d" , i + y ) ;
    }
    *n = x ;
}//end void sum_n