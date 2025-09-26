#include <stdio.h>
#include <string.h>
struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

void set_val( S s[] , int i ) ;

void show_st( S s[] , int i ) ;

void show_g(float n[] ) ;

int main() {
    int n = 3 ;
    S room1[n] ;
    set_val( room1 , n ) ;
    show_st( room1 , n ) ;

}

void set_val( S s[] , int i ){
    for( int n = 0 ; n < i ; n++ ){
        printf( "\nStudent : %d ", n+1 ) ;
        printf( "\nName : " ) ;
        scanf( " %s" , s[n].Name ) ;

        printf( "ID : " ) ;
        scanf( " %s" , s[n].ID ) ;

        printf( "Scores in Subject 1 : " ) ;
        scanf( " %f" , &s[n].ScoreSub1 ) ;

        printf( "Scores in Subject 2 : " ) ;
        scanf( " %f" , &s[n].ScoreSub2 ) ;

        printf( "Scores in Subject 3 : " ) ;
        scanf( " %f" , &s[n].ScoreSub3 ) ;

        printf( "Scores in Subject 4 : " ) ;
        scanf( " %f" , &s[n].ScoreSub4 ) ;

        printf( "Scores in Subject 5 : " ) ;
        scanf( " %f" , &s[n].ScoreSub5 ) ;

    }
}//end void set_val

void show_st( S s[] , int i ) {
    float num [5] ;
    float avg ;
    for (int n = 0; n < i ; n++) {
        printf( "\nStudent %d : \nName : %s \nID : %s \nScores : %2.0f %2.0f %2.0f %2.0f %2.0f " ,
        n+1 ,
        s[n].Name ,
        s[n].ID ,
        s[n].ScoreSub1 ,
        s[n].ScoreSub2 ,
        s[n].ScoreSub3 ,
        s[n].ScoreSub4 ,
        s[n].ScoreSub5 
        );
        printf( "\nGrades : ") ;
        num[0] = s[n].ScoreSub1 ;
        num[1] = s[n].ScoreSub2 ;
        num[2] = s[n].ScoreSub3 ;
        num[3] = s[n].ScoreSub4 ;
        num[4] = s[n].ScoreSub5 ;
        show_g(num) ;
        for( int j = 0 ; j < 5 ; j++ ) {
            avg += num[j] ;
        }
        printf( "\nAverage Scores: %.1f \n" , avg/5 ) ;
    }
    
}
void show_g(float n[] ){
    char gr[3] ;
    for (int i = 0 ; i < 5 ; i++ ) {
        if(  n[i] >= 85 ) {
            strcpy( gr,"A+" ) ;
        }else if ( n[i] >= 80 ) {
            strcpy( gr,"A" ) ;
        } else if ( n[i] >= 75 ) {
            strcpy( gr,"B+" ) ;
        } else if ( n[i] >= 70 ) {
            strcpy( gr,"B" ) ;
        } else if ( n[i] >= 65 ) {
            strcpy( gr,"C+" ) ;
        } else if ( n[i] >= 60 ) {
            strcpy( gr,"C" ) ;
        } else if ( n[i] >= 55 ) {
            strcpy( gr,"D+" ) ;
        } else if ( n[i] >= 50 ) {
            strcpy( gr,"D" ) ;
        } else if ( n[i] >= 45 ) {
            strcpy( gr,"F+" ) ;
        } else {
            strcpy( gr,"F" ) ;
        }
        printf("%2s " , gr ) ;
    }
}