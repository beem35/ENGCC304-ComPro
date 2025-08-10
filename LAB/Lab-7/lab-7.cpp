#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {

    int score , min , max ;
    srand( time( NULL ) ) ;
    int ex = 0 ;
    char st[] = "" ;
    
    do {
        int num = rand() % 100 + 1;

        printf( "\nDo you want to play game (1=play,-1=exit) \n" ) ;
        scanf( " %s" , st ) ;

        
        // printf("%s", st);
        score = 100 ;
        min = 1 ;
        max = 100 ;

        if( atoi(st) == 1 ) {
            printf( "Score = %d" , score ) ;
            while (num != ex) {
                printf("\ninput number (%d - %d) : " , min , max) ;
                scanf(" %d",&ex) ;

                if( num < ex ) {
                    score -= 10 ;

                    if(max >= ex) {
                        max = ex - 1 ;
                    }//end if

                    printf("\nSorry, the winning number is LOWER than %d. (Score = %d) " , ex , score ) ;
                } else {
                    if(num == ex) {
                        break;
                    }//end if
                    score -= 10 ;

                    if(min <= ex) {
                        min = ex + 1 ;
                    }//end if
                    
                    printf("\nSorry, the winning number is HIGHER than %d. (Score = %d) " , ex , score ) ;
                }//end if else  

                if( score == 0 ){
                    printf( "\nGame Over!!\n" ) ;
                    break;
                }//end if    
            }//end while loop
            if( score > 0 ) {
                printf("\nThat is correct! The winning number is %d. " , ex ) ;
                printf( "Score this game: %d" , score ) ;
            }//end if
        }//end if

        if( atoi(st) != 1 && atoi(st) != -1 ) {
            printf( "Please Enter only 1 or -1\n" ) ;
        }//end if

    } while ( atoi(st) != -1 ) ;//end while loop
    
    
    printf( "exit game..." ) ;

    return 0 ;
}