#include <stdio.h>

int main(){

    int num1 = 0 ;
    int num2 = 0;
    printf("Enter Number for Start : ");
    scanf( "%d" , &num1 ) ;

    printf("Enter Number for End : ");
    scanf( "%d" , &num2 ) ;

    for (int strat = num1 ; strat <= num2 ; strat++ )
    {
        for(int i = 1 ; i <= 12 ; i ++ ) {
            printf("%d x %d = %d \n" , strat , i , strat*i );
        }
        printf("\n\n");
    }
    
    
    

    return 0 ;
}