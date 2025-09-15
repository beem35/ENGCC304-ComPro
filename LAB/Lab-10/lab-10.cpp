#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[20] ;
    char text2[20] ;
    char temp ;
    int len ;

    printf("Enter Word : ") ;
    scanf( " %s" , text ) ;

    len = strlen(text) ;

    for ( int j = 0 ; j < len ; j++ ) {
        text[j] = tolower(text[j]) ;
        temp = text[j] ;
        text2[len-j-1] = temp ;
    }//end for

    

    if ( strcmp(text,text2) == 0 ) {
        printf( "\nPass." ) ;
    } else {
        printf( "\nNot Pass." ) ;
    }//end else if
    return 0 ;
}//end main