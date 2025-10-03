#include <stdio.h>
#include <ctype.h> // สำหรับ isspace

int countword( char * ) ;

int main() {
    char name[10] ;

    printf("Enter file name: ") ;
    scanf( "%s" , name ) ;
    
    int totalword = countword(name);
    if (totalword >= 0) {
        printf("Total number of words in '%s' : %d words\n", name, totalword) ;
    }
    return 0;
}

int countword( char *filename ) {
    FILE *file = fopen(filename, "r") ;
    if ( file == NULL ) {
        printf("ไม่สามารถเปิดไฟล์ %s ได้\n", filename) ;
        return -1 ;
    }

    int word_count = 0 ;
    int inword = 0 ; // flag ว่ากำลังอยู่ในคำหรือไม่
    char ch ;

    while ( ( ch = fgetc(file) ) != EOF ) {
        if ( isspace(ch) ) { // ถ้าเจอ whitespace
            inword = 0;    // สิ้นสุดคำ
        } else {
            if ( inword == 0 ) {
                word_count++ ; // เจอเริ่มคำใหม่
                inword = 1 ;
            }
        }
    }

    fclose(file) ;

    return word_count ;
}