#include <stdio.h>

void swapNumbers(int ** , int ** ) ;
int main(){
    int num1 ;
    int num2 ;
    int *ptr1 ;
    int *ptr2 ;
    ptr1 = &num1 ;
    ptr2 = &num2 ;
    printf( "Enter num1 : " ) ;
    scanf(" %d" , &num1 ) ;

    printf( "Enter num2 : " ) ;
    scanf(" %d" , &num2 ) ;

    printf( " Before swap (num1 & num2) : %5d , %5d \n" , num1 ,num2 ) ;
    // printf( " Before swap (ptr1 & ptr2) : %5d , %5d \n" , *ptr1 ,*ptr2 ) ;
    swapNumbers( &ptr1 , &ptr2 ) ;
    printf( " After swap (num1 & num2) : %5d , %5d \n" , num1 ,num2 ) ;
    // printf( " Before swap (ptr1 & ptr2) : %5d , %5d \n" , *ptr1 ,*ptr2 ) ;
    return 0 ;
}

void swapNumbers(int **ptr1 , int **ptr2 ){
    **ptr1 = **ptr1 + **ptr2 ;
    **ptr2 = **ptr1 - **ptr2 ;
    **ptr1 = **ptr1 - **ptr2 ;
}