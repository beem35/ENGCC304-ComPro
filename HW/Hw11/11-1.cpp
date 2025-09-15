#include <stdio.h>

int all_sum(int,int,int) ;

int main(){
    int num1 ;
    int num2 ;
    int num3 ;

    printf( "Input num 1 : " ) ;
    scanf( " %d" , &num1 ) ;

    printf( "Input num 2 : " ) ;
    scanf( " %d" , &num2 ) ;

    printf( "Input num 3 : " ) ;
    scanf( " %d" , &num3 ) ;

    printf( "Sum = %d " , all_sum( num1 , num2 , num3 ) ) ;

    return 0 ;
}//end main

int all_sum( int n1 , int n2 , int n3 ){
    int sum ;
    sum = n1 + n2 + n3 ;
    return sum ;
}