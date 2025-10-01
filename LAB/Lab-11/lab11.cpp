#include <stdio.h>
#include <string.h>

void arm_num( char n[] ) ;
int pow( int , int ) ;

int main() {

    char num[10]  ;

    printf( "Enter Number : " ) ;
    scanf( " %s" , num ) ;
    arm_num( num ) ;
    
    return 0 ;

}// end main 

void arm_num( char n[] ) {
    int num[ 10 ] ;
    int arm[ 10 ] ;
    int sum = 0 ;
    int sum2 = 0 ;
    int len_num = strlen( n ) ;
    char temp ;
    // printf("%d", '0') ;
    for ( int i = 0 ; i < len_num ; i++ ) {
        temp = n[ i ] ;
        num[ i ] = temp - '0';
        arm[ i ] = pow( num[ i ],len_num ) ;
        sum += arm[ i ] ;
        sum2 += num[ i ] * pow( 10,len_num-i-1 ) ;
        
    }// end loop for


    if ( sum == sum2 ) {
        printf( "\nPass" ) ;
    } else {
        printf( "\nNot Pass" ) ;
    }// end else if 


}//end void arm_num

int pow( int x , int y ) {
    int re = 1 ;
    for ( int i = 0 ; i < y ; i++ ) {
        re *= x ;
    }
    return re ;
}// end int pow