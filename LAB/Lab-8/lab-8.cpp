#include <stdio.h>

int main(){

    int Pos ;
    int year ;
    int Project ;
    int slary ;
    int bonus ;
    int ex_bonus ;
    int sum ;

    printf( "Position : " ) ;
    scanf( " %d" , &Pos ) ;

    if ( Pos > 0 && Pos < 4 ) {

        if( Pos == 1 ) {
            slary = 20000 ;
        }else if ( Pos == 2 ) {
            slary = 35000 ;
        }else if ( Pos == 3 ) {
            slary = 50000 ;
        }//end else if
        
        printf( "Years of Experience: " ) ;
        scanf( " %d" , &year ) ;

        printf( "Number of Projects Completed this Year: " ) ;
        scanf( " %d" , &Project ) ;

        if ( year > 5 ) {
            bonus = slary * 0.2 ;
        } else if ( year > 3 ) {
            bonus = slary * 0.15 ;
        } else if ( year > 0 ) {
            bonus = slary * 0.1 ;
        }

        if ( Project >= 5 ) {
            ex_bonus = slary * 0.05 ;
        }

        sum = slary + bonus + ex_bonus ;

        printf( "Base Salary: %d \n" , slary ) ;
        printf( "Experience Bonus: %d \n" , bonus ) ;
        printf( "Special Bonus: %d \n" , ex_bonus ) ;
        printf( "Net Salary: %d \n" , sum ) ;
        
    } else {
        printf ( "\nPls [1-3] only " ) ;
    }// end if

    return 0 ;
}//end main